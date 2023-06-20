#include <stdio.h>

/**
  * main - Write a program that prints all possible different combinations of
  * three digits, the digits must be separted by a comma and space, the digits
  * must be different,0,1 and 2 combination are considered the same, must Print
  * only the smallest combination of three digits,Numbers should be printed in
  * ascending order, with three digits, only use the putchar function,only use
  * putchar six times maximum in your code, not allowed to use any variable of
  * type char, all your code should be in the main function.
  */
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	for (k = '0'; k <= '9'; k++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				if (!((i == j) || (j == k) || (j > i) || 
							(k > j)))
				{
					putchar(k);
					putchar(j);
					putchar(i);
					if (!(i == '9' && k == '7' &&
								j == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

