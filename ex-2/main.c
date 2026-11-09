#include <stdlib.h>
#include <stdio.h>

int add(int nb1, int nb2)
{
    return nb1 + nb2;
}

int main()
{
    int result = add(4, 7);
    printf("La somme des nombres est : %d\n", result);
    return (0);
}