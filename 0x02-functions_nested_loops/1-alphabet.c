#include "stdio.h"
#include "stdlib.h"
/**
 * print_alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int i;

for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
