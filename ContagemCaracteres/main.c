#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;
    int i = 0;

    printf("Digite uma string: ");
    scanf("%m[^\n]", &str);

    while (str[i] != '\0') {
        i++;
    }

    printf("A string possui %d caracteres\n", i);

    free(str);

    return 0;

}
