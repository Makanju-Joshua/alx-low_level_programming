#include "main.h"

/**
  * print_numbers - Write a function that prints the numbers, from 0 to 9,
  * followed by a new line.You can only use _putchar twice in your code.
  *
  * Return: void
  */

void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
