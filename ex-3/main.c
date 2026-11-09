#include <stdlib.h>
#include <stdio.h>

double compute_average(double number1, double number2, double number3)
{
	double average = (number1 + number2 + number3) / 3;

	return(average);
}

int main()
{
	double average;

	average = compute_average(12, 15, 14);
	printf("la moyenne des 3 notes est de : %.2f\n", average);
    return(0);
}