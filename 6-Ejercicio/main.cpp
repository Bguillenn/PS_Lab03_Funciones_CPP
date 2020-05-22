#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void IngresarValores(int*,int);
void MostrarArreglo(int*,int);
void MostrarPermutaciones(int*, int);
void IntercambiarPos(int*, int p1, int p2);
int* DuplicarArreglo(int*, int);


int main(){
    int num_elementos;
    cout<<"Ingresa la cantidad de elementos: ";cin>>num_elementos;
    int *arr = new int[num_elementos];
    IngresarValores(arr, num_elementos);
    MostrarPermutaciones(arr,num_elementos);
}

void IngresarValores(int* arr, int length){
    cout<<endl;
    cout<<"### Ingresando los valores del arreglo ###"<<endl;
    for(int i=0;i<length;i++){
        cout<<">Ingresa elemento "<<(i+1)<<": ";cin>>arr[i];
    }
    cout<<"=>> Arreglo ingresado es: ";MostrarArreglo(arr,length);cout<<endl;
    cout<<"### <<FIN DE INGRESO DE DATOS>> ###"<<endl;
    cout<<endl;
}

void MostrarArreglo(int *arr, int length){
    cout<<"[ ";
    for(int i = 0;i<length; i++)
        cout<<arr[i]<<" ";
    cout<<"]";
}

void IntercambiarPos(int* arr, int p1, int p2){
    int aux = arr[p1];
    arr[p1] = arr[p2];
    arr[p2] = aux;
}

void MostrarPermutaciones(int *arr, int length){
    cout<<endl;
    cout<<"####### MOSTRANDO PERMUTACIONES #######"<<endl;
    int *aux = DuplicarArreglo(arr, length);
    cout<<"TAMANIO: "<<length<<endl;
    for(int i = 0; i < length ; i++){
       if (i == 0) {cout<<"ARREGLO ORIGINAL: ";MostrarArreglo(aux,length);cout<<endl<<endl;}
        for(int j = 0; j<length -1 ; j++){
            //cout<<"CAMBIADO POS "<<j<<" y "<<(j+1)<<endl;
            IntercambiarPos(aux, j, j+1);
            MostrarArreglo(aux,length); cout<<endl;
        }
    }
    cout<<"#######################################"<<endl;
}

int* DuplicarArreglo(int* arr, int length){
    int *nuevo_arreglo = new int[length];
    for(int i = 0; i<length; i++)
        nuevo_arreglo[i] = arr[i];
    return nuevo_arreglo;
}



