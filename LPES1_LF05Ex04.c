#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, maior, menor;

    printf("Insira um numero, ou envie 0 para concluir: ");
    scanf("%d", &n);

    maior = n;
    menor = maior;

    while(n != 0) {
        printf("Insira outro numero, ou envie 0 para concluir: ");
        scanf("%d", &n);

        if((n > maior) && (n != 0)) {
            maior = n;
        }
        if((n < menor) && (n != 0)) {
            menor = n;
        }
    }

    printf("\n\nO maior valor informado foi %d, enquanto o menor foi %d.\n\n", maior, menor);

    system("PAUSE");
    return 0;
}
