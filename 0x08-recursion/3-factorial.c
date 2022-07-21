#include "main.h"

/**
 * factorial -> a function to give a factorial
 * @n: number
 * Return: integer
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
