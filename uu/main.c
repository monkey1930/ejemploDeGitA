#include <stdio.h>
#include <stdlib.h>

int DameUnEntero(char* mensaje,int max,int cantidad,int *pNumero);
int estaEntreRangos(int superior,int inferior, int elNumero);
int main()
{
    int unNumero;
    int sePudo;
    sePudo=DameUnEntero("ingresa tu edad :",100,2,&unNumero);
    if(sePudo==-1)
    {
        printf("no se pudo cargar");
    }else
    {
          printf("el numero es :%d",unNumero);
    }
    return 0;

    if(estaEntreRangos(100,0,22)==0)
    {

    }else{
    }
     if(estaEntreRangos(100,0,unNumero)==0)
    {

    }else{

    }


}
int estaEntreRangos(int superior,int inferior, int elNumero)
{
    if(elNumero<superior && elNumero>inferior)
    {
        return 0;
    }
    return 1;
}



int DameUnEntero(char* mensaje,/*char* mensajeError,*/int max,int cantidad,int *pNumero)
{
    int contador=0;
    printf("%s",mensaje);
    scanf("%d",pNumero);

    while(*pNumero>max)
    {
         if(contador==cantidad)
         {
            return -1;
         }
        contador++;
        printf("%s",mensaje);
        scanf("%d",pNumero);
    }
    return 0;
}


