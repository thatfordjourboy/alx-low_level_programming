#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number and states whether
 * it is positive, negative or zero.
<<<<<<< HEAD
 * Return: Always 0
=======
 * Return: Always 0.
>>>>>>> 7c4d02bf943d598a8ddd3199c3311165733a958a
 */
int main(void)
{
	int n;
<<<<<<< HEAD
	
	srand(time(0));
	n =rand() - RAND_MAX /2;
=======

	srand(time(0));
	n = rand() - RAND_MAX / 2;
>>>>>>> 7c4d02bf943d598a8ddd3199c3311165733a958a
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
