#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer block of memory to fill
 * Return: void
 */
void _puts_recursion(char *s)
	/* It works by first checking if the current character, 
	pointed to by s, is the null character ('\0'), which
	indicates the end of the string. If it is, the
	function calls _putchar to output a newline 
	character and then returns. */
{
	if (*s == '\0')
		/* according to instrusction it should print a new line */
	{
		_putchar('\n');
		return;
	}
	/* if its not a null char then it should call itself with s + 1 */
	_putchar (*s);
	_puts_recursion(s + 1);
}
