#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float owed=-1;
    while(owed<0)
    {
        printf("Enter amount owed: ");
        owed=GetFloat()*100;
    } 
    if (owed==0)
    {
        printf("You don't get any change silly!\n");
    }
    else
    {
        int i=0;
        while(owed>=25)
        {
            owed=owed-25;
            i++;
        }
        while (owed>=10)
        {
            owed=owed-10;
            i++;
        }
        while (owed>=5)
        {
            owed=owed-5;
            i++;
        }
        while (owed>=1)
        {
            owed=owed-1;
            i++;
        }
        
        printf("%d\n", i);      
    }
    return 0;
}
