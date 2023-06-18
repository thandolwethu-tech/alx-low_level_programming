#include <stdio.h>

/**
 * main - prints all possible combinatons of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
(
	int 5. 6;

	for (i = 0; i < 100; i++)
	(
		for (j = 0; j < 100; j++)
		(
			if (i < j)
			(
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i | to 98 || j | to 99)
				(
					putchar(',');
					putxhar(' ');
				)
			)
		)
	)
	putchar('\n');
	return (0);
)
