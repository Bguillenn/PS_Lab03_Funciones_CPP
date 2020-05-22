#include <iostream>
#include <conio.h>

using namespace std;

int MostrarMenu();
void ProcesarOpcion(int opc);
void ParesImpares();
void NumerosPerfectos();
void NumeroInvertido();

int main(){
    int opc;

    do{
        opc = MostrarMenu();
        ProcesarOpcion(opc);
    } while (opc != 0);
    
    return 0;
}

int MostrarMenu(){
    int opc;
    cout<<"=====================================[ MENU ]====================================="<<endl;
    cout<<"1. Determinar pares e impares <Ingresa 10 numeros y descubre cual es par e impar>"<<endl;
    cout<<"2. Numeros perfectos <Te muestra los numeros perfectos entre 1 y 100>"<<endl;
    cout<<"3. Invertir numero <Ingresa un numero y lo invertimos!>"<<endl;
    cout<<"0. Salir del programa"<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<"INGRESA UNA OPCION: ";cin>>opc;
    return opc;
}

void ProcesarOpcion(int opc){
    switch (opc){
        case 1:
            ParesImpares();
            break;
        case 2:
            NumerosPerfectos();
            break;
        case 3:
            NumeroInvertido();
            break;
        case 0:
            cout<<">>HASTA PRONTO!"<<endl;
            break;
        default:
            cout<<"!>>LA OPCION QUE ELEGISTE ES INCORRECTA!"<<endl;
    }
    cout<<"[PRESIONA ALGUNA TECLA PARA CONTINUAR]"<<endl;
    getch();
}

void ParesImpares(){
    int num;
    cout<<endl;
    cout<<">> PARES Y IMPARES <Ingresa 10 numeros y te mostraremos cuales son pares e impares>"<<endl;
    for(int i = 0;i < 10; i++){
        cout<<">Ingresa un numero ["<<(i+1)<<"]: ";cin>>num;
        if(num % 2 == 0) cout<<"=> El numero "<<num<<" es par!"<<endl;
        else cout<<"=> El numero "<<num<<" es impar!"<<endl;
    }
    cout<<endl;
}

void NumerosPerfectos(){
    int sumDiv = 0;
    cout<<endl;
    cout<<">> NUMEROS PERFECTOS <Te muestra los numeros perfectos entre 1 y 100>"<<endl;
    for(int i = 1; i<=100 ; i++){
        for(int j= 1; j<i; j++)
            if(i % j == 0) sumDiv+=j;
        if(sumDiv == i) cout<<">Numero perfecto encontrado: "<<i<<endl;
        sumDiv = 0;
    }
    cout<<endl;
}

void NumeroInvertido(){
    int num, inv=0;
    cout<<endl;
    cout<<">> NUMERO INVERTIDO <Ingresa un numero y te lo invertimos>"<<endl;
    cout<<"> Ingresa un numero: ";cin>>num;
    if(num < 0) num = abs(num);
    while(num > 0){
        inv=inv * 10 + (num % 10);
        num = num / 10;
    }

    cout<<"=> El numero invertido es "<<inv<<endl;
    cout<<endl;
}