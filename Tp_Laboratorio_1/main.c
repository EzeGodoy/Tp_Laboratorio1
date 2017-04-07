#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    int aux1=0;
    int aux2=0;
    int resultado=0;
    int bandera1=0;
    int bandera2=0;
    float resultadoFloat=0;
    long int resultadoFactorial;

    while(seguir=='s')
    {
        system("cls");

        printf("1- Ingresar 1er operando (A=%d)\n",aux1);
        printf("2- Ingresar 2do operando (B=%d)\n",aux2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

    switch(opcion)
        {
            case 1:
                    bandera1=1;
                    aux1=pedirNumero("Ingrese el operador A: ");

                    break;

            case 2:
                    bandera2=1;
                    aux2=pedirNumero("Ingrese el operador B: ");

                    break;

            case 3:
                    if(bandera1==0)
                    {
                    printf("Ingrese el operador A.\n");
                    }

                    else if(bandera2==0)
                    {
                    printf("Ingrese el operador B.\n");
                    }

                    else
                    {
                    resultado=suma(aux1,aux2);
                    printf("La suma da: %d\n",resultado);
                    }

                    system("pause");
                    break;


            case 4:
                    if(bandera1==0)
                    {
                    printf("Ingrese el operador A.\n");
                    }

                    else if(bandera2==0)
                    {
                    printf("Ingrese el operador B.\n");
                    }

                    else
                    {
                    resultado=resta(aux1,aux2);
                    printf("La resta da: %d\n",resultado);
                    }

                    system("pause");
                    break;

            case 5:
                    if(bandera1==0)
                    {
                    printf("Ingrese el operador A.\n");
                    }

                    else if(bandera2==0)
                    {
                    printf("Ingrese el operador B.\n");
                    }

                    else
                    {
                        if(aux2==0)
                        {
                        printf("Imposibe dividir por cero, ingrese otro valor.\n\n");
                        }

                        else
                        {
                        resultadoFloat=division(aux1,aux2);
                        printf("La division da: %.2f\n",resultadoFloat);
                        }
                    }

                    system("pause");
                    break;

            case 6:
                    if(bandera1==0)
                    {
                    printf("Ingrese el operador A.\n");
                    }

                    else if(bandera2==0)
                    {
                        printf("Ingrese el operador B.\n");
                    }

                    else
                    {
                        resultado=multiplicacion(aux1,aux2);
                        printf("La multiplicacion da %d\n",resultado);
                    }

                    system("pause");
                    break;

            case 7:
                    if(bandera1==0)
                    {
                        printf("Ingrese el operador A.\n");
                    }

                    else if(aux1<0)
                    {
                        printf("Imposible factorear numeros negativos.\n");
                    }

                    else
                    {
                        resultadoFactorial=factorial(aux1);
                        printf("El factor de %d es: %ld\n",aux1,resultadoFactorial);
                    }

                    system("pause");
                    break;

            case 8:

                    if(bandera1==0)
                    {
                        printf("Ingrese el operador A.\n");
                    }

                    else if(bandera2==0)
                    {
                        printf("Ingrese el operador B.\n");
                    }

                    else
                    {
                        resultado=suma(aux1,aux2);
                        printf("La suma da: %d\n",resultado);

                        resultado=resta(aux1,aux2);
                        printf("La resta da: %d\n",resultado);


                    if(aux2==0)
                    {
                        printf("Imposible dividir por cero\n");
                    }

                    else
                    {
                        resultadoFloat=division(aux1,aux2);
                        printf("La division da: %.3f\n",resultadoFloat);
                    }

                        resultado=multiplicacion(aux1,aux2);
                        printf("La multiplicacion da: %d\n",resultado);

                    if(aux1<0)
                    {
                        printf("Imposible factorear numeros negativos\n");
                    }

                    else
                    {
                        resultadoFactorial=factorial(aux1);
                        printf("El factor de %d es: %ld\n",aux1,resultadoFactorial);
                    }

                    }

                    system("pause");
                    break;

            case 9:
                    seguir = 'n';
                    break;
        }
    }

    return 0;
}












