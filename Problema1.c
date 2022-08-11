#include <stdio.h> 
void pedirDatos();
void imprimirAreaTriangulo(int base, int altura);

int main(){
   
    printf("Programa que imprime el area de un triangulo \n");
    pedirDatos();
   
    return 0;
}

void pedirDatos(){
    int base,altura,bandera;

    printf("Inserte la base \n");
    bandera= scanf("%d",&base);
    while (bandera == 0)
    {
        fflush(stdin);
        printf("Inserte un numero valido \n");
        bandera= scanf("%d",&base);
    }

    printf("Inserte la altura \n");
    bandera= scanf("%d",&altura);

     while (bandera == 0)
    {
        fflush(stdin);
        printf("Inserte un numero valido \n");
        bandera= scanf("%d",&altura);
    }
   imprimirAreaTriangulo(base,altura);

    
}

void imprimirAreaTriangulo(int base,int altura){

    float area = (float)((base*altura)/2);
    printf("El resultado es %f",area);

}