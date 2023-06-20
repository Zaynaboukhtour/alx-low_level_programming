#include "main.h"

/** 
 * _is lower - Shows 1 if the input is a
 * lowercase character
 * 0
 * 
 * Return: 1 for lowercase
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
