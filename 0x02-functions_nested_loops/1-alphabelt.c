#include "main.h"

/**
 * main - print alphabelt a-z
 *
 * return : 0
 */

void print_alphabelt(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
