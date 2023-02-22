#include <stdio.h>
#include <stdio.h>

/**
 * main -  main function
 *
 * Description: write a program that prints all possoible
 * different combinations of two digits
 * Numbers must be separted by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * you can only use the putchar function
 * Return: Always: 0
 */

int  main(void)
{
	int c;
	int d;
	int e;

	e = 0;
	while (e  < 10; e++)
	{
		d = 0;
		while (d < 10 ; d++)
		{
			c = 0;
			while (c < 10; c++)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
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
