#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[3];
    int idade, i;

    FILE *arq;
    arq = fopen("idades-e-nomes.txt", "w");

    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome da pessoa: ");
        scanf("%s", nome);
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);
        fprintf(arq, "%s %d\n", nome, idade);
    }

    fclose(arq);
    return 0;
}