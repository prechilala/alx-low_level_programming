#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * Description - main value
 * followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char low;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}

