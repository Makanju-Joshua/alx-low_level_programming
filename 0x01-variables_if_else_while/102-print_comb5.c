#include <stdio.h>
/**
  * A program that prints all possible combinations of two two-digit numbers.
  * numbers should range from 0 to 99, two numbers should be separated by a
  * space, numbers should be printed with two digits, 1 should be printed as 01
  * the combination of numbers must be separated by comma, followed by a space,
  * the combinations of numbers should be printed in ascending order, 00 01 and
  * 01 00 are considered as the same combination of the numbers 0 and 1, only
  * use the putchar function, only use putchar eight times maximum in your code
  * not allowed to use any variable of type char, codes should be in the main
  * function.
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
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
