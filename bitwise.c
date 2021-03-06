// program 1-C program to get the nth bit of a number


#include <stdio.h>

int main()
{
    int num, n, bitStatus;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &n);

    bitStatus = (num >> n) & 1;

    printf("The %d bit is set to %d", n, bitStatus);

    return 0;
}

// program 2-C program to set the nth bit of a number


#include <stdio.h>

int main()
{
    int num, n, newNum;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Enter nth bit to set (0-31): ");
    scanf("%d", &n);

    newNum = (1 << n) | num;

    printf("Bit set successfully.\n\n");
    printf("Number before setting %d bit: %d (in decimal)\n", n, num);
    printf("Number after setting %d bit: %d (in decimal)\n", n, newNum);

    return 0;
}