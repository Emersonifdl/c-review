#include <stdio.h>

int main() {
    int n, i, fatorial = 1;

    printf("Digite um número: ");

    if (scanf("%d", &n) != 1) {
        printf("Número inválido\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é %d\n", n, fatorial);

    return 0;
}
