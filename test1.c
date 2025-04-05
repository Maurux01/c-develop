#include <stdio.h>

int main() {
    char nombre[50];

    printf("¿Cómo te llamas? ");
    scanf("%s", nombre);  // Lee una palabra (sin espacios)

    printf("¡Hola, %s!\n", nombre);

    return 0;
}
