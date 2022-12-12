#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main-main function to generate a random number
 *
 * Return:Always 0 (Sucess)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative", n);
	}
	return (0);
}
