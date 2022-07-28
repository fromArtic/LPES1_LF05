#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, acumulador, nPositivos, contInvalido;
    float media;

    n = 1;
    acumulador = 0;
    nPositivos = 0;
    contInvalido = 0;

    while(n){
        printf("Insira um numero positivo: ");
        scanf("%d", &n);
        if(n < 0){
            printf("Numero invalido. ");
            contInvalido++;
        }
        if(contInvalido == 5){
            printf("Suas chances acabaram.\n\n");
            return 0;
        }
        else
            if(n > 0){
            contInvalido = 0;
            acumulador = n + acumulador;
            nPositivos++;
            }
        else
            if(n == 0){
                media = acumulador/nPositivos;
                printf("\nSua media foi de %.1f\n\n", media);
                return 0;
            }
    }

    system("PAUSE");
    return 0;
}
