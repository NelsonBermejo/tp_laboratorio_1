#include<stdio.h>
#include<stdlib.h>
#include "funMath.h"
/*DOCUMENTADO AL ESTYLO "DOXYGEN"*/
/**
*\brief Pide 2 numeros al Usuario.
*\param Realiza la suma entre los numeros ingresados.
*\return El resultado de la suma.
*
*/
float suma(float num1,float num2)
{
    float resSuma=num1+num2;
    return resSuma
    ;
}
/**
*\brief Pide 2 numeros al Usuario.
*\param Realiza la resta entre los numeros ingresados.
*\return El resultado de la resta.
*
*/
float restar(float num1,float num2)
{
    float resResta=num1-num2;
    return resResta;

}
/**
*\brief Pide 2 numeros al Usuario.
*\param Realiza la multiplicacion entre los numeros ingresados.
*\return El resultado de la multiplicacion.
*
*/
float multiplicar(float num1,float num2)
{
    float resMultiplicar=num1*num2;
    return resMultiplicar;

}
/**
*\brief Pide 2 numeros al Usuario.
*\param Si uno de los numeros ingresados es distinto de cero, realiza la divicion.
*\param realiza la divicion.
*\return El resultado de la divicion.
*\param si un numero ingresado es igual a cero.
*\return Retorna 0.0.
*/
float dividir (float num1,float num2)
{
    if(num2!=0){
        float resDivide=num1/num2;
        return resDivide;
        }else{
            return 0.0;
        }
}

/** \brief pide un numero al usuario.
* \param si el numero ingresado es un 1 retorna 1.
* \param se le resta un 1 al numero ingresado, luego multiplica el numero ingresado por el resultado de la resta.
* \return retorna la multiplicacion de el numero ingresado por los numeros antecedentes.
*
*/
float factorial(float n)
{
    int resp;
    if(n==1)
        return 1;
    resp=n* factorial(n-1);
    return(resp);

}




