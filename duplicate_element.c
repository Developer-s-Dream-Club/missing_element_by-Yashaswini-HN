#include<stdio.h>
void main()
{
    int i,arr[20],j,num;
    printf("enter size of array:\n");
    scanf("%d",&num);
    printf("enter any %d elements in array :\n",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements are:\n");
    for(i=0;i<num;i++)
    {
        for(j=i;j<num;j++)
    }
    if(arr[i]==arr[j])
    {
        printf("%d\n",arr[i]);
    }
}
}
}