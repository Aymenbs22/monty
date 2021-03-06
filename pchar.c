#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * pchar - prints the int at the top of the stack as char
 * @stack: stack
 * @line_cnt: count
 * Return: 0
*/
void pchar(stack_t **stack, unsigned int line_cnt)
{
	if (!stack || !(*stack))
{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_cnt);
		status = EXIT_FAILURE;
		return;
}
	if (isalpha((*stack)->n) == 0)
{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_cnt);
		status = EXIT_FAILURE;
		return;
}
	printf("%c\n", (*stack)->n);
}
