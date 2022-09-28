/*
 * File: 1-print_rev_recursion.c
 * Auth: sam
 */

#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar_rev_recursion(s + 1);
		_putchar(*s);
	}
}
