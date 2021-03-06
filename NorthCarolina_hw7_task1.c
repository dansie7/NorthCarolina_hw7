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
void copy_arr(double ar1[], double ar2[], int length);
void copy_ptr(double *ar1, double *ar2, int length);
void copy_ptrs(double *ar2, double *start, double *end);

/* Main Program */
int main(int argc, char *argv[])
{
	double ard[LEN] = {1.0, 2.0, 3.0, 4.0, 5.0};
	double ard2[LEN];
	double ard3[LEN];
	double ard4[LEN];
	
	printf("source array: ");
	show_arr(ard, LEN);

	printf("copied by subscript: ");
	copy_arr(ard, ard2, LEN);
	show_arr(ard2, LEN);

	printf("copied by pointer: ");
	copy_ptr(ard, ard3, LEN);
	show_arr(ard3, LEN);

	printf("copied using pointer range: ");
	copy_ptrs(ard4, ard, ard + LEN);
	show_arr(ard4, LEN);

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

void copy_arr(double ar1[], double ar2[], int length)
{
	for(int i = 0; i < length; i++)
	{
		ar2[i] = ar1[i];
	}
	return;
}

void copy_ptr(double *ar1, double *ar2, int length)
{
	for(int i = 0; i < length; i++)
	{
		*ar2 = *ar1;
		ar1++;
		ar2++;
	}
	return;
}

void copy_ptrs(double *ar2, double *start, double *end)
{
	while(1)
	{
		if(start < end)
		{
			*ar2 = *start;
		}
		else
		{
			break;
		}
		ar2++;
		start++;
	}
}
