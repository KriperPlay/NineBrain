#include <stdio.h>
#include <stdlib.h>

#define plus '+'
#define minus '-'
#define print '.'
#define input0 ','
#define voidd ' '
char sym = 32;

//code on brainfuck:
char *string = "";

int main()
{
	for(char *c = string; *c; c++)
	{
		if(*c == voidd)
		{
			printf("error: brainfuck found void in code!\n");
			exit(1);
		}
	}
	for(char *c = string; *c; c++)
	{
		if(*c == plus)
			sym++;
		if(*c == minus)
			sym--;
		if(*c == print)
			printf("%c", sym);
		if(*c == input0)
			scanf("%d", &sym);
	}
	printf("\n");
}
