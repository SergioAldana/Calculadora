#include <stdio.h>
#include<math.h>

/*
 * Codigo personalizado de la siguiente pagina:
 * https://www.lawebdelprogramador.com/codigo/C-Visual-C/97-Calculadora-en-C.html
 */

int main(int args, char *argv[]) {

    int opcion;    /* Opcion que elegimos */
    int a;         /* Primer numero que introducimos */
    int b;         /* Segundo numero que introducimos */
    int resultado; /* Variable reservada para cada resultado de las operaciones */

    printf(" 1. Suma \n");
    printf(" 2. Resta \n");
    printf(" 3. Multiplicacion \n");
    printf(" 4. Division \n");
    printf(" 5. Potencia \n");
    printf(" 6. Raiz Cuadrada \n");
    printf("Elige una de las siguientes operaciones: \n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:     /* Suma */
            printf("Introduce un numero: \n");
            scanf("%i", &a);
            printf("Introduce otro numero: \n");
            scanf("%i", &b);
            resultado = a + b;
            printf("La SUMA de %i + %i es igual a %i", a, b, resultado);
            break;

        case 2:     /* Resta */
            printf("Introduce un numero: \n");
            scanf("%i", &a);
            printf("Introduce otro numero: \n");
            scanf("%i", &b);
            resultado = a - b;
            printf("La RESTA de %i - %i es igual a %i", a, b, resultado);
            break;

        case 3:     /* Multiplicacion */
            printf("Introduce un numero: \n");
            scanf("%i", &a);
            printf("Introduce otro numero: \n");
            scanf("%i", &b);
            resultado = a * b;
            printf("La MULTIPLICACION de %i * %i es igual a %i", a, b, resultado);
            break;

        case 4:     /* Division */
            printf("Introduce un numero: \n");
            scanf("%i", &a);
            printf("Introduce otro numero: \n");
            scanf("%i", &b);
            if (b != 0) {
                resultado = a / b;
                printf("El cociente de la DIVISION de %i / %i es igual a %i", a, b, resultado);
            } else
                printf("No se puede dividir entre 0");
            break;

        case 5:     /* Potencia */
            printf("Introduce un numero: \n");
            scanf("%i", &a);
            printf("Introduce otro numero: \n");
            scanf("%i", &b);
            if (b < 0) {
                printf("El exponente debe ser positivo");
            } else {
                resultado = pow(a, b);
                printf("El resultado de %i ^ %i es %i", a, b, resultado);
            }
            break;

        case 6:     /* Raiz Cuadrada */
            printf("Introduce un numero para la raiz cuadrada: \n");
            scanf("%i", &a);
            if (a > 0) {
                resultado = sqrt(a);
                printf("La RAIZ CUADRADA de %i es %i", a, resultado);
            } else printf("No se puede hacer la raiz cuadrada de un numero negativo");
            break;

        case 7:     /* Raiz Cubica */

        /*verificar
            float z;
            int num;
            cout<<"ingrese un numero para calcular la raiz cubica : ";
            cin>>num;

            z=cbrt(num);

            cout<<z;
            return 0;
            */

    } /* fin switch */
}  /* fin main */




