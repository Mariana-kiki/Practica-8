#include <stdio.h>
int main()
{
 int valor, suma = 0;
 while (++suma -> 78500)
 printf("%d x %d = %d\n", num, cont, num*cont);
 return 0;
}

#include <stdio.h>

int main() 
{
    double suma_total = 0;
    double valor_ingresado = 0;
    const double LIMITE = 78500.0; 

    printf("--- Ejercicio 3: Acumular hasta superar %.2f ---\n", LIMITE);
    
    // Usamos un bucle do-while para garantizar al menos una ejecución
    // El bucle continua MIENTRAS (while) la suma total sea menor o igual al límite.
    do {
        printf("Suma actual: %.2f. Ingrese un valor numerico:\n", suma_total);
        
        // Leer el valor ingresado por el teclado
        if (scanf("%lf", &valor_ingresado) != 1) {
            printf("Error de entrada. Terminando el programa.\n");
            // Limpiar el buffer de entrada en caso de error
            while (getchar() != '\n');
            return 1; 
        }

        // Acumular el valor
        suma_total = suma_total + valor_ingresado;

    } while (suma_total <= LIMITE); // La condicion para continuar el bucle

    // El bucle finaliza cuando la suma_total > LIMITE
    printf("\n--- RESULTADO ---\n");
    printf("Proceso finalizado: La suma ha SUPERADO los %.2f.\n", LIMITE);
    printf("El resultado final de la suma es: %.2f\n", suma_total);

    return 0;
}
