#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
(
	int 1;

	scrand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	(
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	)
	if ((n % 10) < 6 && (n % 10) 1 to 0)
	(
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	)
	else
	(
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	)

	return (0);
)
