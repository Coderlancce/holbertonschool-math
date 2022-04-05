#include "holberton.h"

/**
 * display_ complex_number - print a complex number
 * @c: complex number
 *
 * Return: none
 */

void display_complex_number(complex c)
{
	if (c.re == 0)
	{
		if (c.im < 0)
			printf("- %.9fi\n", c.im * (-1));
		else if (c.im == 0)
			printf("0\n");
		else
		  printf("%.9fi\n", c.im);
	}
	else
	{
		if (c.im < 0)
			printf("%9f - %.9fi\n", c.re, c.im * (-1));
		else if (c.im == 0)
			printf("%.9f\n", c.re);
		else if (c.im == 1)
			printf("%.9f + i\n", c.re);
		else if (c.im == -1)
			printf("%.9f - i\n", c.re);
		else
			printf("%.9f + %.9fi\n", c.re, c.im);
	}
}
