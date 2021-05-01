#include "cola.h"
#include <iostream>

using namespace std;

/* Función que hace uso de la plantilla de la clase Cola. Se declara un
objeto tipo Cola de números enteros. Se le inserta el número 5 y luego
se quita y se imprime. Este ejemplo sencillo muestra el uso de los
métodos de la clase. */
int main(void){
    Cola<int> ObjCola;
    int Indice;
    int Valor;

    if (ObjCola.ColaLlena() != 1){
        ObjCola.InsertaCola(5); 
    }
    else{
        cout<<"\nError de desbordamiento. Cola llena. \n"; 
    }
    
    if (ObjCola.ColaVacia() != 1){
        ObjCola.EliminaCola(&Valor); 
        cout<<Valor<<"\n";
    }
    
    else{
        cout<<"\nSubdesbordamiento. Cola vacía.\n"; 
    }

    return 0;
}