#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, result;

    //Nao entendi bem como definir como 0 no inicio influencia o resultado final
    result = 0;

    for(n = 100; n <= 200; n++) {
        if(n % 7 == 0) {
            result = result + n;
        }
    }

    printf("A somatoria dos numeros multiplos de 7 entre 100 e 200 eh %d.\n\n", result);

    system("PAUSE");
    return 0;
}
