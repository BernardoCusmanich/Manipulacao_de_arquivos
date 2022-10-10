#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, valores;

    FILE *arq = fopen("valores.txt", "r");

    printf("Digite um numero: ");
    scanf("%f", &n);

    while (fscanf(arq, "%f", &valores) != EOF)
    {
        if (valores == n)
        {
            printf("O numero %.2f esta no arquivo\n", n);
            break;
        }
    }

    if (valores != n)
    {
        printf("O numero %.2f nao esta no arquivo\n", n);
    }

    fclose(arq);

    return 0;
}