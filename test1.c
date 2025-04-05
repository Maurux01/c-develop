#include <stdio.h>

int main() {
    int num1, num2, suma;

    printf("Ingresa el primer número: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo número: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("La suma de %d y %d es %d\n", num1, num2, suma);

    return 0;
}
#include <stdio.h>

int main() {
    char nombre[50];

    printf("¿Cómo te llamas? ");
    scanf("%s", nombre);  // Lee una palabra (sin espacios)

    printf("¡Hola, %s!\n", nombre);

    return 0;
}
