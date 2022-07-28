#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, result;

    result = 0;

    printf("Informe um numero: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            result++;
        }
    }

    if((result == 0) && (n != 0)) {
        printf("%d eh um numero primo.\n", n);
    }
    else {
        printf("%d nao eh um numero primo.\n", n);
    }

    system("PAUSE");
    return 0;
}
