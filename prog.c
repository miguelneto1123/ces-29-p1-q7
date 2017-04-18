#include <stdio.h>

void masterFunc()
{
	puts("This is the original function on the 1st commit.");
}

void desenvolvimentoFunc()
{
	puts("You called the desenvolvimentoFunc() function.");
}

int main()
{
	masterFunc();
}