/*
 * =====================================================================================
 *
 *       Filename:  NorthCarolina_hw7_task1.c
 *       	Usage:  ./NorthCarolina_hw7_task1.c
 *    Description:  Task 1 - Copying Arrays
 *
 *        Version:  1.0
 *        Created:  03/16/2017 04:24:31 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Sharon Dansie (), sharondansie@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>

#define LEN 5
/* Function Prototypes */
void show_arr(const double ar[], double length);
/* Main Program */
int main(int argc, char *argv[])
{
	double ard[LEN] = {1.0, 2.0, 3.0, 4.0, 5.0};

	printf("source array: ");
	show_arr(ard, LEN);

	return 0;
}


/* Function Defenitions */
void show_arr(const double ar[], double length)
{
	for(int i = 0; i < length; i++)
	{
		printf("%.1f ", ar[i]);
	}
	printf("\n\n");
	return;
}



