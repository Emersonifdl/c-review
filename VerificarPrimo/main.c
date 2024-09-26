#include <stdio.h>

int main()
{
    int n, i, primo = 1;
    printf("Digite um número: ");

    if (scanf("%d", &n) != 1) {
        printf("Número inválido\n");
        return 1;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        printf("%d é primo\n", n);
    } else {
        printf("%d não é primo\n", n);
    }

    return 0;
}
