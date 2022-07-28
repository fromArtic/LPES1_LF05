#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, qtdDivisores;

    qtdDivisores = 0;

    printf("Informe o numero que deseja saber quantos divisores possui: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        if(n % i == 0) {
            //printf("%d\n\n", i); Revela quais sao os divisores, porem nao eh o intuito do programa, entao ocultei
            qtdDivisores++;
        }
    }

    printf("%d possui %d divisores.\n\n", n, qtdDivisores);

    system("PAUSE");
    return 0;
}
