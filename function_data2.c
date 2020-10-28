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

/**
 * print_special - print string with special characters
 * @list: argument
 * Return: int
 */

int print_special(va_list list)
{
	char *s;
	int i;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i]; i++)
	{
		if (s[i] == 0 || s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			print_hexa(s[i]);
		}
		else
		{
			_putchar(s[i]);
		}
	}
	return (i);
}

int print_hexa(char *n)
{
	int i, j, num = 0;
	unsigned int numb;
	unsigned int numbers[30];

	
	numb = atoi(n); 
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


