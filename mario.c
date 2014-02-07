#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height=0;
    while (height<1 || height>23)
    {
        printf("Height: ");
        height=GetInt();
        if (height==0)
        {
            break;
        }
    }
    
    int total_height=height;
    while (height>0)
    {
        int spaces=height-1;
        int hash=total_height-spaces;
        while (spaces>0)
        {
            printf(" ");
            spaces--;
        }
        
        while (hash>0)
        {
            if (hash==1)
            {
                printf("##\n");
                hash--;
            }
            else
            {
                printf("#");
                hash--;
            }
        }
        height--;        
    }
    return 0;
}
