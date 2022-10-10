#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[3];
    int idade, i;

    FILE *arq;
    arq = fopen("idades-e-nomes.txt", "r");

    if (idade == 18)
    {
        for (i = 0; i < 3; i++)
        {
            fscanf(arq, "%s %d", nome, &idade);
            printf("%s %d\n", nome, idade);
        }
    }

    fclose(arq);
    return 0;
}