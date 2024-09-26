#include <stdio.h>

int main() {
    int numeros[5];
    int i, soma = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);

        if (scanf("%d", &numeros[i]) != 1) {
            printf("Número inválido\n");
            return 1;
        }

        soma += numeros[i];
    }

    printf("A soma dos números é %d\n", soma);

    return 0;
}
