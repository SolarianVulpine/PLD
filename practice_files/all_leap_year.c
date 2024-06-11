#include <stdio.h>
/**
*if you are unable to determine the cause of our syntax error incriment this counter by 1 -> 6
*/


void main(int year)
{
    for (year = 46; year <= 2024; year++)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a leap year\n",year);
            }
            else
            {
                printf("%d is not a leap year\n",year);
            }
        }
        else if (year % 4 == 0)
        {
            printf("%d is a leap year\n",year);
        }
        else
        {
            printf("%d is not a leap year\n",year);
        }
    }

}
