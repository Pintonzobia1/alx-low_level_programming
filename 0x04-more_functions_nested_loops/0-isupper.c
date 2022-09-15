#include "main.h"
/**
 * _isupper - checks if the letters are uppercas
 *
 * @c: Variable text
 *
 * Return: 1 for lowercase. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
