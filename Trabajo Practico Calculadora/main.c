/**Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular la suma (A+B)
4. Calcular la resta (A-B)
5. Calcular la division (A/B)
6. Calcular la multiplicacion (A*B)
7. Calcular el factorial (A!)
8. Calcular todas las operaciones
9. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las 4 operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
*/





#include <stdio.h>
#include <stdlib.h>
#include "funMath.h"
int main()
{
    float numUno;
    float numDos;
    float sumar;
    float multiplicacion;
    float divid;
    float factoriarUno;
    float factoriarDos;
    float resta;
    int opc;

    do{
        printf("\n-------------------------------------------------------------------\n");
        printf("\n*   1-Sumar                                                       *\n");
        printf("\n*   2-Restar                                                      *\n ");
        printf("\n*   3-multiplicar                                                 *\n");
        printf("\n*   4-dividir                                                     *\n");
        printf("\n*   5-Factoriar                                                   *\n");
        printf("\n*   6-Todos (Sumar, Restar, mMltiplicar,Dividir, Factoriar)       *\n");
        printf("\n*   7-Salir                                                       *\n");
        printf("\n-------------------------------------------------------------------\n\n\n");

        scanf("%d",&opc);

        if(opc>=1 && opc<=6)
        { printf("Ingrese el Primer Numero: ");
            scanf("%f",&numUno);



             printf("Ingrese el Segundo Numero: ");
             scanf("%f",&numDos);
             printf("\n\n\n\n");

             printf("El primer Numero ingresado es: %.2f\n ",numUno);
             printf("El segundo Numero ingresado es: %.2f\n",numUno);



        switch(opc){

                case 1:
                    sumar=suma(numUno,numDos);
                    printf("El resultado de la suma es %.2f\n",sumar);
                    printf("\n");
                    break;

                case 2:
                    resta=restar(numUno,numDos);
                    printf("El resultado de la resta es %.2f \n",resta);
                    break;
                case 3:
                    multiplicacion=multiplicar(numUno,numDos);
                    printf("El resultado de la multiplicacion es %.2f \n",multiplicacion);
                    break;
                case 4:
                    divid=dividir(numUno,numDos);
                    printf("El resultado de la div es %.2f \n",divid);
                    break;
                case 5:
                    factoriarUno=factorial(numUno);
                    factoriarDos=factorial(numDos);
                    printf("El factorial de %f es %.2f\n",numUno,factoriarUno);
                    printf("El factorial del numero %f es %f\n ",numDos,factoriarDos);
                    break;
                case 6:
                        sumar=suma(numUno,numDos);
                        resta=restar(numUno,numDos);
                        multiplicacion=multiplicar(numUno,numDos);
                        divid=dividir(numUno,numDos);
                        factoriarUno=factorial(numUno);
                        factoriarDos=factorial(numDos);

                printf("\nEl resultado de la suma es %.2f: \n ",sumar);
                printf("\nEl resultado de la resta es es %.2f: \n ",resta);
                printf("\nEl resultado de la multiplicación es %.2f \n ",multiplicacion);
                printf("\nEl resultado de la div es %.2f \n ",divid);
                printf("\nEl factorial de %f es %.2f \n",numUno,factoriarUno);
                printf("\nEl factorial del numero %f es %f \n",numDos,factoriarDos);
                break;
                default:
                break;

                    }

        }
        }while(opc!=7);




    return 0;
}

