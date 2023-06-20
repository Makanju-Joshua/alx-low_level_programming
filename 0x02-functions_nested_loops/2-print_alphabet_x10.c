#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters ten times
*Return: no return
*/
void print_alphabet_x10(void)
{
	int counter = 0;
	char c;
	while (counter++ <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	_putchar(c);

	_putchar('\n');
	}
}
