#include "holberton.h"
/**
 * print_reverse - print string in reverse
 * @list: argument
 * Return: int
 */

int print_reverse(va_list list)
{
	char *s;
	int i, j;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i]; i++)
	{}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	return (i);
}
