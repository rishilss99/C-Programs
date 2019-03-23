#include <stdio.h>
int main(void)
{
    int i,j,k,total;
    for(i=1;i<=5;i++)
    {
        printf("%d ",i);
        total=i;
        for(k=4;k>5-i;k--)
        {
            total=total+k;
            printf("%d ",total);
        }
        printf("\n");
    }
}
