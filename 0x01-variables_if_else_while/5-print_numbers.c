#include <stdio.h>
/**
 * main - prints single numbers in base 10
 *
 * Return: Always 0 (Succcess)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}

