#include <stdio.h>
#include <stdlib.h>

int main()
{
    char aluno[20], resposta;
    int i, gabarito, resultado = 0;

    FILE *arq;
    arq = fopen("aluno.txt", "w");
    arq = fopen("gabarito.txt", "r");

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno);
    fprintf(arq, "%s", aluno);

    for (i = 0; i < 40; i++)
    {
        printf("Digite a resposta da questao %d: ", i + 1);
        fflush(stdin);
        scanf("%c", &resposta);
        fprintf(arq, "%c", resposta);
        if (resposta == gabarito)
        {
            resultado++;
        }
    }

    fscanf(arq, "%d", &gabarito);

    printf("O aluno %s obteve %d pontos no exame.", aluno, resultado);

    fclose(arq);

    return 0;
}