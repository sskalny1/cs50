#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

#define KEY_LENGTH 2

int main(int argc, string argv[])
{    
    if (argc == KEY_LENGTH)
    {
        int key = atoi(argv[1]);

        string plaintext=GetString();
        
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                if (plaintext[i] + key <= 'Z')
                {
                    printf("%c", plaintext[i] + key);
                }
                else
                {
                    int remainder = (plaintext[i] + key) - ('Z'+1);
                    printf ("%c", ('A'+remainder));
                }
            } 
            else if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                if (plaintext[i] + key <= 'z')
                {
                    printf("%c", plaintext[i] + key);
                }
                else
                {
                    int remainder = (plaintext[i] + key) - ('z'+1);
                    printf ("%c", ('a'+remainder));
                }   
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        
        printf("\n");
    }
    else
    {
        printf("Please enter valid number.");
        return 1;
    }
}
