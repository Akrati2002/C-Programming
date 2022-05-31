#include <stdio.h>
int main()
{
    int n,max;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    int array1[n]; 
    int array2[100]={0};
    for(int i=0;i<n;i++)
    {
        printf("enter element %d:\n",i+1);
        scanf("%d",&array1[i]);
    }
    max=array1[0];
    for(int i=1;i<n;i++)
    {
        if(max<array1[i])
        { max=array1[i]; }
    }
    max++;
  
    
    for(int i=0;i<n;i++)
    {
        array2[array1[i]]++;
    }
    for(int i=0;i<max;i++)
    {
        if(array2[i]>0)
        { printf("%d= %d times\n",i,array2[i]); }
    }
    return 0;
}