#include "main.h"

/**
 * print_line -> this is a function print a line
 * @n: an integer parameter
 */

void print_line(int n);
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar(95);
		_putchar('\n');
	}
}
