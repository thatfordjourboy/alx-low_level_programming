#include <stdio.h>

/**
 * main - program prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;
	{
		for (i = 0; i <= 99; i++)
		{
			for (j = i; j <= 99; j++)
			{
				if (i != j)
				{
					/* Print first number */
					putchar(i / 10 + '0'); /* Tens place */
					putchar(i % 10 + '0'); /* Ones place */

					putchar(' ');

					/* Print second number */
					putchar(j / 10 + '0');
					putchar(j % 10 + '0');

					if (i != 98 || j != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
