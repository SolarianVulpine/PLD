#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 0;
	j = 2;
	while ((i < 10) && (j < 14))
	{
		if (i == 1)
		{
			j -= 7;
		}
		else if (j == 1)
		{
			i += j;
		}
		else if (i == 6)
		{
			while (j > 0)
			{
				j --;
				i ++;
			}
		}
		
		i ++;
		j += 2;
	}

		printf("i = %d\n", i);
		printf("j = %d\n", j);

		return(0);
}
