#include"main.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * _printf - produces output according to a format.
 * @format:char paramter
 * Return: number characters printed
 */
int _printf(const char *format, ...)
{
va_list valist;
int  i;
int size ;

size = 0;
va_start(valist, format);
for (i = 0; *format != '\0'; i++)
{
if (format[i]== '%')
{
if (format[i + 1] == 'c')
{
vprintf(va_arg(valist, char *), valist);
}
if (format[i + 1] == 's')
{
vprintf(va_arg(valist, char *), valist);
}
}
size++;
}
va_end(valist);
return (size);
}
