#include<stdio.h>
void main()
{
    int n,arr[n],i,j;
    int f,l;
    printf("Enter size");
    scanf("%d",&n);
    printf("Enter the array elements :");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        f=arr[i];
        l=arr[i+1];
        for(j=f+1;j<l;j++)
        {
            printf("the missing element is %d",j);
        }
    }
}