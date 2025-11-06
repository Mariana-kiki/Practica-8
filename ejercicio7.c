#include <stdio.h>

void main() 
{
    int suma = 0;
    int valor;
    int contador = 1;

    while (suma <= 78500) 
    {
        printf("Ingresa un número: ", contador);
        scanf("%d", &valor);

        suma = suma + valor;
        contador++;
    }

    printf("\nLa suma total es %d, que supera 78,500.\n", suma);
    printf("Se ingresaron %d valores en total.\n", contador - 1);
}
