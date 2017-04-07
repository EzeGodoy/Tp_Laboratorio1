#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int pedirNumero(char texto[])
{
    float numero1;
    int numero2;
    printf("%s",texto);
    scanf("%f",&numero1);
    numero2=(int)numero1;
    return numero2;
}

int suma(int aux1,int aux2)
{
    int resultado;
    resultado=aux1+aux2;
    return resultado;
}

int resta(int aux1,int aux2)
{
    int resultado;
    resultado=aux1-aux2;
    return resultado;
}

float division(int aux1,int aux2)
{
    float resultado;
    resultado=(float)aux1/aux2;
    return resultado;
}

int multiplicacion(int aux1,int aux2)
{
    int resultado;
    resultado=aux1*aux2;
    return resultado;
}

int factorial(int aux1)
{
    int resultado;

    if(aux1==0)
    {
        return 1;
    }

    else
    {
    resultado=aux1*factorial(aux1-1);
    }
    return resultado;
}
