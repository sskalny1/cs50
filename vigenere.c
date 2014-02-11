#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

#define KEY_LENGTH 2

int main(int argc, string argv[])
{    
    string keyword;
    string plaintext;
    
    if (argc == KEY_LENGTH)
    {
        for (int j=0; j < strlen(argv[1]);j++)
        {
            if (!isalpha(argv[1][j]))
                {
                    printf("Must enter alphanumeric value for key.");   
                    return 1;
                }
        }
        
        keyword=argv[1];
        plaintext=GetString();
        int key[strlen(keyword)];
        
        //convert keyword to numerical key     
        for (int i=0; i < strlen(keyword); i++)
        {
            key[i]=toupper(keyword[i])-'A';
        }

        int j=0;
       
        for (int i=0; i < strlen(plaintext); i++)
        {
            if (j == strlen(keyword))
            {
                j=0;
            }
           
           if (isupper(plaintext[i]))
           {
               if (plaintext[i]+key[j] <= 'Z')
               {
                 printf("%c", plaintext[i]+key[j]);
                 j++;
               }
               else 
               {
                    int remainder = (plaintext[i]+key[j])-'Z';
                    printf("%c", 'A'+(remainder-1));
                    j++;
               }
           }
           else if(islower(plaintext[i]))
           {
           
           if (plaintext[i]+key[j] <= 'z')
               {
                 printf("%c", plaintext[i]+key[j]);
                 j++;
               }
               else 
               {
                    int remainder = (plaintext[i]+key[j])-'z';
                    printf("%c", 'a'+(remainder-1));
                    j++;
               }                
           }
           else
           {
                printf("%c",plaintext[i]);
           }
            
        }
        printf("\n");
    }
    else
    {
        printf("fail\n");
        return 1;
    }
}
