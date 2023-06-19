#include <stdio.h>
/**
  * main - Write a program that prints all possible different combinations of
  * two digits, numbers must be separted by comma and space, the numbers must
  * be different, 01 & 10 are the same when combined, print only the smallest
  * combination of two numbers, must be printed in ascending order with two
  * digits, only putchar fuction is allowed and can be used only five times,
  * char variable is not allowed, main function must contain all codes.
  * Return: Always 0 (Success)
  */
int main(void)
{
	int a = '0';
	int b = '0';

	for (b = '0'; b <= '9'; b++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			if (!((a == b) || (b > a)))
			{
				putchar(b);
				putchar(a);
				if (!(a == '9' && b == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
