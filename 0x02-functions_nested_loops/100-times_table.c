#include "main.h"

/**
 * times_table - 15 times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int j, k, opp;

	for (j = 0; j <= 15; j++)
	{
		_putchar(48);
		for (k = 1; k <= 15; k++)
		{
			opp = j * k;
			_putchar(44);
			_putchar(32);
			if (opp <= 15)
			{
				_putchar(32);
				_putchar(opp + 48);
			}
			else
			{
				_putchar((opp / 10) + 48);
				_putchar((opp % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
