#include <iostream>
#include <stdio.h>

using namespace std; //Libreria que evita el std::

float varTypes(int a, int b,float y){
    float sum = a + b + y;
    return sum;
}

void imprimirConCiclos(int x){
    for(int i = 0; i <= x; i++){
        printf("%d \n", i);
    }
    int i = 0;
    do{
        printf("Hola! \n");
        i++;
    }while (i <= 2);

    while(i <= 10){
        printf("Adios! %d\n", i);
        i++;
    }
}

int main() {
    int n1, n2;
    float n3, sum, altura;
    /*
     * Scanning with scanf() function
     * */
    cout<<"Dos números enteros separados por un espacio: \n";
    scanf("%d %d", &n1, &n2); //SCANF = First arg is the "codetype" of the declared vars and the another args are for the assignement
    cout<<"Un decimal: \n";
    scanf("%f", &n3);
    sum = varTypes(n1, n2, n3);
    /***
     * Print with printf() function, isn't equal to print with cout word
     * */
    printf("La suma de sus valores ingresados es igual a : %5.2f \n", sum);
    cout<<"Ingrese el número que quiere que se imprima desde 0 hasta x \n";
    scanf("%d", &n1);
    imprimirConCiclos(n1);

    /***
     *  CONDITIONS
     * */
    printf("Ingrese su altura (con punto flotante): \n");
    scanf("%f", &altura);
    if(altura <= 1.60){
        printf("Es bajo!");
    }else if(altura <= 1.78){
        printf("Altura promedio en contexto Colombiano");
    }else{
        printf("Es alto!");
    }
    return 0;
}
