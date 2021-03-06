/*
 * =====================================================================================
 *
 *       Filename:  NorthCarolina_hw7_task2.c
 *       	Usage:  ./NorthCarolina_hw7_task2.c
 *    Description:  Task2-Random Array
 *
 *        Version:  1.0
 *        Created:  03/16/2017 04:25:03 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Sharon Dansie (), sharondansie@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <time.h>

#define MAXMIN 10
/* Function Prototypes */
void MaxMin(int numvals, int vals[], int* min, int* max);

/* Main Program */
int main(int argc, char *argv[])
{
	int i;
	int list[MAXMIN];
	int max = 0;
	int min = 0;

	srand(time(NULL));
	list[0] = rand() % 100;
	min = list[0];
	printf("The random generated list is:\n");

	for (i = 0; i < MAXMIN; i++)
	{
		list[i] = rand() % 100;
		printf("%d ", list[i]);
	}
	MaxMin(MAXMIN, list, &min, &max);
	return 0;
}

/* Function Defenitions */
void MaxMin(int numvals, int vals[], int* min, int* max)
{
	int i;
	for (i = 0; i < numvals; i++)
	{
		if(vals[i] > *max)
		{
			*max = vals[i];
		}
 		if(vals[i] < *min)
		{
			*min = vals[i];
		}
	}
	printf("\nThe max value of the array is: %d\n", *max);
	printf("The min value of the array is: %d\n", *min);
	return; 
}

