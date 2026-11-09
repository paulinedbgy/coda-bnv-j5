#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main()
{
    print_str("hello\n");

    int result = add(4, 7);
    printf("La somme des nombres est : %d\n", result);

	double average;

	average = compute_average(12, 15, 14);
	printf("la moyenne des 3 notes est de : %.2f\n", average);

    return 0;
}