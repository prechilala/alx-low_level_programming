#include "main.h"

/**
 * jack_bauer ->  a function that prints every minute of the day
*/

void jack_bauer(void)
{
	int x, y;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			if (x < 10)
			{
				_putchar('0');
				_putchar(x + '0');
			}
			else if (x >= 10)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			if (y < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(y + '0');
			}
			else if (y >= 10)
			{
				_putchar(':');
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
