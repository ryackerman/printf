#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: pointer on specifiers  (l, h) for (d, i, u, o, x, X)
 * @f: pointer om function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int printf_HEX_aux(unsigned int num);
int printf_HEX(va_list val);
int printf_bin(va_list val);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *s);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
