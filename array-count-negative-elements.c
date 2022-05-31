#include <stdio.h>
#include <math.h>
int main()
{
    int n,negative=0;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    int array1[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element %d:\n",i+1);
        scanf("%d",&array1[i]);
    }
    printf("negative elements of array:");
    for( int j=0;j<n;j++)
    {
        if(array1[j]<0)
        negative+=1;

    }
    printf("%d",negative);
    return 0;
}