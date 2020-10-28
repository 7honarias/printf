#include "holberton.h"
/**
 * print_rot13 - print how rot13
 *
 * @list: argument
 *
 * Return: string in rot13
 */

int print_rot13(va_list list)
{
	return (rot13(va_arg(list, char *)));
}

/**
 * print_unsigned - Print an integer and decimal function.
 *
 * @n: Bring the argument.
 *
 * Return: The lenght
 */

int print_unsigned(va_list n)
{
	unsigned int c = 0, g, f, i = 0;
	unsigned long int b = 1;

	unsigned int h = va_arg(n, int);

	if (h < 1)
	{
		_putchar('0');
		i++;
		return (i);
	}

		g = h;

	f = g; /** Temp var */
	while (g != 0)
	{
		g = g / 10;
		c = c + 1; /** Digit Counter */
		b = b * 10; /** Base for divisions */
	}
	i = c; /** Return Value */
	b = b / 10;
	while (c != 0)
	{
		_putchar((f / b) + '0');
		f = f % b;
		b = b / 10;
		c = c - 1;
	}
	return (i);
}

/**
 *print_octa - print number in octa
 *@list: argument
 *Return: int
 */

int print_octa(va_list list)
{
	int i, j, num = 0;
	unsigned int numb;
	unsigned int numbers[30];

	numb = va_arg(list, unsigned int);
	if (numb < 2)
		num += _putchar(numb + 48);
	else
	{
		for (j = 0; numb > 0; j++)
		{
			numbers[j] = numb % 8;
			numb = numb / 8;
		}
		for (i = j - 1; i >= 0; i--)
			num += _putchar(numbers[i] + 48);
	}
	return (num);
}

/**
 *print_lowerx - print number in lower_hexa
 *@list: argument
 *Return: int
 */

int print_lowerx(va_list list)
{
	int i, j, num = 0;
	unsigned int numb;
	unsigned int numbers[30];

	numb = va_arg(list, unsigned int);
	if (numb < 2)
		num += _putchar(numb + 48);
	else
	{
		for (j = 0; numb > 0; j++)
		{
			numbers[j] = numb % 16;
			numb = numb / 16;
		}
		for (i = j - 1; i >= 0; i--)
			if (numbers[i] > 9)
			{
				num += _putchar(numbers[i] + 87);
			}
			else
			{
				num += _putchar(numbers[i] + 48);
			}
	}
	return (num);
}

/**
 *print_upperx - print number in hexa_upper
 *@list: argument
 *Return: int
 */

int print_upperx(va_list list)
{
	int i, j, num = 0;
	unsigned int numb;
	unsigned int numbers[30];

	numb = va_arg(list, unsigned int);
	if (numb < 2)
		num += _putchar(numb + 48);
	else
	{
		for (j = 0; numb > 0; j++)
		{
			numbers[j] = numb % 16;
			numb = numb / 16;
		}
		for (i = j - 1; i >= 0; i--)
			if (numbers[i] > 9)
			{
				num += _putchar(numbers[i] + 55);
			}
			else
			{
				num += _putchar(numbers[i] + 48);
			}

	}
	return (num);
}
