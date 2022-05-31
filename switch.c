//Program 1-to find even and odd by using switch
#include <stdio.h>
int main()
{
    int a;
    printf("enter the integer:");
    scanf("%d",&a);
    switch(a%2)
    {
        case 1:
           printf("odd");
           break;
        case 0:
           printf("even");
           break;
    }
    return 0;

}

//Program 2-to find if the number is positive or negative by switch
#include <stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    switch(a>0)
    {
        case 1:
          printf("positive");
          break;
        case 0:
        switch(a<0)
        {
            case 1:
               printf("negative");
               break;
            case 0:
               printf("zero");
               break;

        }
           
    }
    return 0;
}

//Program 3-to fid roots of quadratic equation by using switch
#include <math.h>
#include <stdio.h>
int main()
{
    printf("finding the roots of a quadratic equation\n");
    double a,b,c,discriminant,root1,root2,realPart,imagPart;
    printf("enter coefficients a,b and c:");
    scanf("%lf,%lf,%lf",&a,&b,&c);

    discriminant = b*b - 4*a*c;

    switch(discriminant>0)
    {
        case 1:
           printf("real and distinct roots\n");
           root1=(-b+sqrt(discriminant))/(2*a);
           root2=(-b-sqrt(discriminant))/(2*a);
           printf("root1=%lf\nroot2=%lf",root1,root2);
           break;
        case 0:
        switch(discriminant<0)
        {
            case 1:
               printf("roots are not real\n");
               realPart=-b/(2*a);
               imagPart=sqrt(-discriminant)/(2*a);
               printf("root1=%lf+%lf\nroot2=%lf-%lf",realPart,imagPart,realPart,imagPart);
               break;
            case 0:
               printf("real and equal roots/");
               root1=root2=-b/(2*a);
               printf("root1=%lf\nroot2=%lf",root1,root2);
               break;
        }
    }
    return 0;


    
}