#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    int array1[n];
    int array2[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element %d:\n",i+1);
        scanf("%d",&array1[i]);
    }
    printf("array2:");
    for(int i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",array2[i]);
    }

    return 0;
}