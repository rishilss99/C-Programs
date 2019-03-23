#include<stdio.h>

int main(void)
{
    int i,j,k;
    for(i=1;i<=9;i++)
    {
        if(i<=5)
        {
            for(j=1;j<=i;j++)
                printf("%d",j);
        }
        if(i>=6)
        {
            for(k=1;k<=10-i;k++)
                printf("%d",k);
        }
        printf("\n");
    }
}
