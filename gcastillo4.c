// Gretel Castillo 
// CSC 341
// 09/12/2024

#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[])
{
	int i;
	int z = 0;
	int *values;

	values = (int *)malloc(sizeof(int)*5);

	printf("argc value is %p \n" , &argc);
	printf("local variable i in stack address is %p \n",&i);
	printf("heap malloc address is %p \n",values);
	
	printf("uninitialized x address is %p \n",&x);
	printf("initialized y address is %p \n",&y);


	
	return EXIT_SUCCESS;
}
