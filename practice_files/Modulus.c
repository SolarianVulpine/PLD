#include <stdio.h>

/**
 * main = entry point for my modulus practice file
 *
 * Description: this file is to help me understand different operators
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1, num2;
	char operator;

	printf("Please enter two whole numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("What would you like to do with these numbers?\n +,-,*,/, or %%\n");
	scanf(" %c", &operator);

	if (operator == '+')
	{
		printf("Result: %d\n", num1 + num2);
	}
	else if (operator == '-')
	{
		printf("Result: %d\n", num1 - num2);
	}
	else if (operator == '*')
	{
		printf("Result: %d\n", num1 * num2);
	}
	else if (operator == '/')
	{
		if (num2 != 0)
		{
			printf("Result: %d\n", num1 / num2);
		}
		else
		{
			printf("Error: Division by 0 not allowed\n");
		}
	}
	else if (operator == '%')
	{
		printf("Result: %d\n", num1 % num2);
	}
	else
	{
		printf("Error: Not a valid operator\n");
	}

	return (0);
}
