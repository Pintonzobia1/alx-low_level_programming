#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (when Sucessful)
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;


	for (i = 1; 1 <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
