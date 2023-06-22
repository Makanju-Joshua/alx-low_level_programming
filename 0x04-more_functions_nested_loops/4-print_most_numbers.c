#include "main.h"

/**
  * print_most_numbers - Write a function that prints the numbers, from 0 to 9,
  * followed by a new line, don't print 2 and 4, You can only use _putchar
  * twice in your code.
  * Return: no return
  */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 50 && a != 52)
			_putchar(a);
	}
	_putchar('\n');
}
