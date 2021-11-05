#include <iostream>

using namespace std; //Libreria que evita el std::

float varTypes(int a, int b,float y){
    float sum = a + b + y;
    return sum;
}

int main() {
    int n1, n2;
    float n3, sum;
    /*
     * Scanning with scanf() function
     * */
    cout<<"Dos números enteros separados por un espacio: \n";
    scanf("%d %d", &n1, &n2); //SCANF = First arg is the "codetype" of the declared vars and the another args are for the assignement
    cout<<"Un decimal: \n";
    scanf("%f", &n3);
    sum = varTypes(n1, n2, n3);
    /*
     * Print with printf() function, isn't equal to print with cout word
     * */
    printf("La suma de sus valores ingresados es igual a : %5.2f", sum);
    return 0;
}
