#include <iostream>
#include <stdio.h>

using namespace std; //Libreria que evita el std::

int main() {
    //CREANDO UN VECTOR SIN DECLARAR VALORES
    int vectorPares[3];
    //SE ANADEN
    vectorPares[0] = 2;
    vectorPares[1] = 4;
    vectorPares[2] = 6;
    //INICIALIZANDO UN VECTOR
    string saludos[5] = {"Hola", "Adios", "Hasta luego!", "Chao!", "Hasta nunca!"};
    //En claso de declarar algún valor vacio, este será igual a 0

    //INICIALIZANDO SIN ACLARAR EL LENGTH
    int pares[] = {2, 4, 6, 8, 10, 12, 14};
    //Obteniendo valores!
    cout<<pares[0]<<endl;
    //Recorriendo vectores:
    int limite = (sizeof(pares)/sizeof(pares[0])); //Retorna el tamaño en bytes del vector.
    for(int i = 0; i < limite; i++){
        cout<<pares[i]<<endl;
    }

    //DE MÁS DE UNA DIMENSIÓN
    int multiDimension[2][2] = {{1, 2}, {3, 5}};
    //ACCEDIENDO AL ESPACIO 1 DE LA DIMENSION 1
    cout << multiDimension[1][1]<<endl;
    //Recorriendo, filas y columnas
    int filas = (sizeof(multiDimension)/ sizeof(multiDimension[0]));
    int columnas = (sizeof(multiDimension[0])/ sizeof(multiDimension[0][0]));
    //Si o si un ciclo anidado, al igual que otros lenguajes para
    for(int i = 0; i < filas ; i++){
        for(int j = 0; j < columnas ; j++){
            cout<< multiDimension[i][j] <<endl;
        }
    }
    return 0;
}