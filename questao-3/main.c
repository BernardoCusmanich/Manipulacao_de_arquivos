#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[30], vet2[30], vet3[30], i, soma;

    FILE *arq = fopen("vet1.txt", "w");
    FILE *arq2 = fopen("vet2.txt", "w");
    FILE *arq3 = fopen("vet3.txt", "w");

    for (i = 1; i < 30; i++)
    {
        fscanf(arq, "%d", &vet1[i]);
        fscanf(arq2, "%d", &vet2[i]);
        vet3[i] = vet1[i] + vet2[i];
    }

    fclose(arq);

    return 0;
}