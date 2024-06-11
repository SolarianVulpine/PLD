#include <stdio.h>

char main( int whoAmI)
{
    int num;
    int Result;

    printf("Please enter a number: ");
    scanf(" %d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even\n", num);
    }
    else
    {
        printf("%d is odd\n", num);
    }
}