#include "holberton.h"
/**
 * print_char - print char.
 * @list: argument
 * Return: int
 */

int print_char(va_list list)
{
	_putchar (va_arg(list, int));

	return (1);
}

/**
 * print_string - print string.
 * @list: argument
 * Return: int
 */
int print_string(va_list list)
{
	char *s;
	int i;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar (s[i]);
	}
	return (i);
}
/**
 * print_int - Print an integer and decimal function.
 *
 * @n: Bring the argument.
 *
 * Return: The lenght
 */
int print_int(va_list n)
{
	unsigned int c = 0, g, f, i = 0;
	unsigned long int b = 1;

	int h = va_arg(n, int);

	if (h == 0)
	{
		_putchar('0');
		i++;
		return (i);
	}

	if (h < 0)
	{
		_putchar('-');
		g = h * -1;
	}
	else
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
	if (h < 0)
		i++;
	return (i);
}

/**
 *print_binary - print number in binary
 *@list: argument
 *Return: int
 */

int print_binary(va_list list)
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
			numbers[j] = numb % 2;
			numb = numb / 2;
		}
		for (i = j - 1; i >= 0; i--)
			num += _putchar(numbers[i] + 48);
	}
	return (num);
}

/**
 *rot13  - print string how rot13
 *@ch: entry point
 *Return: char
 */

int rot13(char *ch)
{
	int i, j, count = 0;
	char alpha[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; ch[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		{
			if (ch[i] == alpha[j])
			{
				count += _putchar(rot13[j]);
				break;
			}
		}
		if (j > 51)
		{
			count += _putchar(ch[i]);
		}
	}
	return (count);
}
