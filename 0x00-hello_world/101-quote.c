#include <unistd.h>

/**
 * main - Prints a text
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	write(2, "and the piece of airt is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
