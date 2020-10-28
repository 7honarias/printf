#include "holberton.h"

/**
 * _typedata - struct of type forma _typedata
 * @ptr: argument
 * @argb: position
 * Return: 0.
 */
int (*_typedata(const char *ptr, int argb))(va_list)
{
	op_t op[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", print_octa},
		{"x", print_lowerx},
		{"X", print_upperx},
		{"r", print_reverse},
		{"R", print_rot13},
		{NULL, NULL}
	};

	int i;

	for (i = 0; op[i].type != NULL; i++)
	{
		if (op[i].type[0] == ptr[argb])
		{
			return (op[i].f);
		}
	}
	return (NULL);
}
