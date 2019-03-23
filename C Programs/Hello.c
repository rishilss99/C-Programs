#include <stdio.h>

int main(void)
{
    int a=0,b,c=1,num;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0)
    {
     b=num%10;
     num=num/10;
     a=a+b;
     c=c*b;
    }
    if(a==c)
    {
        printf("Perfect number");
    }
    else
     {
         printf("Not perfect");
     }
}
