#include <stdio.h>

void pedirDatos();
int main(){

    
pedirDatos();

    return 0;
}



void pedirDatos(){
  
    int dato;
    int sumatoria=0;
    int bandera;

    for (int i = 0; i < 4; i++)
    {
        printf("Inserte el precio numero: %d  \n ",i+1);
        bandera=scanf("%d",&dato);
    while (bandera==0)
    {
        fflush(stdin);
        printf("Inserte un numero valido \n");
        bandera= scanf("%d",&dato);
    }
        sumatoria= sumatoria+dato;

    }
    sumatoria = sumatoria*.85;

    printf("El valor de su compra es: %d",sumatoria);

    
}