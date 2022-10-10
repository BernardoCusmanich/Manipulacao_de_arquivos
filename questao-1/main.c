#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0, aux, i;

    FILE *arq = fopen("sequenciafibonacci.txt", "w");

    a = 1;
    b = 0;

    for (i = 0; i < 20; i++)
    {
        aux = a + b;
        a = b;
        b = aux;
        printf(" %ld ,", aux);
        fprintf(arq, "%ld\n", aux);
    };
    fclose(arq);
    return 0;
};