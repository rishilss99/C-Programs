#include<stdio.h>
int main(void)
{
    int i,j,k,l,m,n;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
        printf("\n");
    }
    for(l=3;l>=1;l--)
    {
        for(m=1;m<=4-l;m++)
            printf(" ");
        for(n=1;n<=l;n++)
            printf("%d",n);
        printf("\n");
    }
}
