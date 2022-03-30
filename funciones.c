#include "header.h"

void perfectoDeficienteAbundante(int numero)
{
    int i, suma = 0;
    for(i=1; i<numero; i++)
    {
        if(numero % i == 0)
        {
            suma += i;
        }
    }
    if(suma == numero)
    {
        printf("El numero es PERFECTO");
    }else if(suma < numero)
    {
        printf("El numero es DEFICIENTE");
    }else
    {
        printf("El numero es ABUNDANTE");
    }
}
