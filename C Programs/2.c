#include<stdio.h>
int main(void)
{
    int i,j,k,l,m,n;
    for(i=1;i<=5;i++)
    {
        for(k=5-i;k>0;k--)
            printf(" ");
        for(j=1;j<=1+2*(i-1);j++)
            printf("%d",j);
        printf("\n");
    }
    for(l=1;l<=4;l++)
    {
        for(m=1;m<=l;m++)
            printf(" ");
        for(n=1;n<=7-2*(l-1);n++)
            printf("%d",n);
        printf("\n");
    }
}
