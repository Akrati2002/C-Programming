#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    int array1[n],even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        printf("enter element %d:\n",i+1);
        scanf("%d",&array1[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(array1[j]%2==0)
        { even+=1; }
        if(array1[j]%2!=0)
        { odd+=1; }
    }
    printf("even elements=%d\n",even);
    printf("odd elements=%d",odd);
    return 0;

}