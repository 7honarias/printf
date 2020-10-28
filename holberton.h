#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct opt - Call the functions to print.
 *
 * @type: Specifies the format to print.
 *
 * @f: Specifes the function to use.
 *
 */


typedef struct opt
{
	char *type;
	int (*f)(va_list);
} op_t;

int print_octa(va_list list);
int print_lowerx(va_list list);
int print_upperx(va_list list);
int print_reverse(va_list list);
int print_rot13(va_list list);
int print_char(va_list list);
int print_string(va_list list);
int print_int(va_list list);
int print_binary(va_list list);
int print_unsigned(va_list list);

int rot13(char *ch);
int _putchar(char c);
int _printf(const char *format, ...);

int (*_typedata(const char *ptr, int argb))(va_list);


#endif
