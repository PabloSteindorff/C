#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
    int maior, segundoMaior, numeroDigitado, inicializado = 0;;

    for (int i = 0,j=1; i < 10; i++)
    {
        printf("Digite o %dº número: ", j++);
        scanf("%d", &numeroDigitado);

        if (inicializado)
        {
            if (numeroDigitado > maior)
            {
                segundoMaior = maior;
                maior = numeroDigitado;
            }
            else if (numeroDigitado > segundoMaior)
            {
                segundoMaior = numeroDigitado;
            }
        }
        else
        {
            inicializado = 1;
            maior = segundoMaior = numeroDigitado;
        }
    }

    system("cls");

    printf("O maior número é: %d \nsegundo maior número é: %d", maior, segundoMaior);

    return 0;
}

