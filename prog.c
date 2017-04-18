#include <stdio.h>

void masterFunc()
{
	puts("This is the original function on the 1st commit.");
	desenvolvimentoFunc();
	puts("Adding some more text...");
	puts("Just a little more...");
}

void desenvolvimentoFunc()
{
	puts("You called the desenvolvimentoFunc() function.");
}

int main()
{
	masterFunc();
}