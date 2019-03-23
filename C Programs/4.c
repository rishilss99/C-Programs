#include<stdio.h.>
int main(void)
{
    int i,temp,j,total=0,l,k;
    scanf("%d",&i);
    temp=i;
    while(i>0)
    {
        k=1;
        j=i%10;
        for(l=1;l<=j;l++)
            k=k*l;
        total=total+k;
        i=i/10;
    }
    if(total==temp)
        printf("Strong number");
}
