#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    int n,i,k,l;
    int arr_len[n],arr_max[n];
    scanf("%d",&n);
    int arr_cases[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr_len[i]);
        int arr_temp[arr_len[i]];
        for(k=0;k<arr_len[i];k++)
            scanf("%d",&arr_temp[k]);
        arr_cases[i]=arr_temp;
        scanf("%d",&arr_max[i]);
    }
    for(l=0;l<n;l++)
        printf("%d %d %d",arr_len[l],arr_cases[l],arr_max[l]);
}


