#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int mostrarMenu();
void interpretarOpcion(int opc);
void Suma();
void Resta();
void Multiplicar();
void Division();
void Potencia();
void Raiz();

int main(){
    int opc;

    do{
        opc = mostrarMenu();
        interpretarOpcion(opc);
    }while(opc != 0);

    return 0;
}

int mostrarMenu(){
    int opc;
    cout<<"==============================[ MENU ]=============================="<<endl;
    cout<<"1. Sumar <Realiza la suma entre dos numeros>"<<endl;
    cout<<"2. Restar <Realiza la resta entre dos numeros>"<<endl;
    cout<<"3. Multiplicar <Realiza la multiplicacion entre dos numeros"<<endl;
    cout<<"4. Division <Realiza la division entre dos numeros"<<endl;
    cout<<"5. Potencia <Calcula la potencia de un numero>"<<endl;
    cout<<"6. Raiz cuadrada <Encuentra la raiz cuadrada de un numero"<<endl;
    cout<<"0. Salir del programa"<<endl;
    cout<<"===================================================================="<<endl;
    cout<<"ELIGE UNA DE LAS OPCIONES: "; cin>>opc;

    return opc;
}

void interpretarOpcion(int opc){
    switch (opc){
        case 1:
            Suma();
            break;
        case 2:
            Resta();
            break;
        case 3:
            Multiplicar();
            break;
        case 4:
            Division();
            break;
        case 5:
            Potencia();
            break;
        case 6:
            Raiz();
            break;
        case 0:
            cout <<"Hasta luego!! :)"<<endl;
            break;
        default:
            cout <<"Opcion incorrecta elige otra porfavor!" <<endl;
    }
}

void Suma(){
    double a,b;
    cout<<">Ingresa un numero: ";cin>>a;
    cout<<">Ingresa otro numero: ";cin>>b;
    cout<<">>La suma de "<<a<<" + "<<b<<" es "<<(a+b)<<endl;
    cout<<"Presiona cualquier tecla para volver al menu!"<<endl;
    getch();
}

void Resta(){
    double a,b;
    cout<<">Ingresa un numero: ";cin>>a;
    cout<<">Ingresa otro numero: ";cin>>b;
    cout<<">>La resta de "<<a<<" - "<<b<<" es "<<(a-b)<<endl;
    cout<<"Presiona cualquier tecla para volver al menu!"<<endl;
    getch();
}

void Multiplicar(){
    double a,b;
    cout<<">Ingresa un numero: ";cin>>a;
    cout<<">Ingresa otro numero: ";cin>>b;
    cout<<">> La multiplicacion de "<<a<<" x "<<b<<" es "<<(a*b)<<endl;
    cout<<"Presiona cualquier tecla para volver al menu!"<<endl;
    getch();
}

void Division(){
    double a,b;
    cout<<">Ingresa un numero: ";cin>>a;
    cout<<">Ingresa otro numero: ";cin>>b;
    while(b == 0){
        cout<<"!>El divisor no puede ser 0, elige otro numero: ";cin>>b;
    }
    cout<<">>La division de "<<a<<" / "<<b<<" es "<<(a/b)<<endl;
    cout<<"Presiona cualquier tecla para volver al menu!"<<endl;
    getch();
}

void Potencia(){
    double a;
    int exp;
    cout<<">Ingresa un numero: ";cin>>a;
    cout<<">Ingresa el exponente: ";cin>>exp;
    while(exp < 0){
        cout<<"!>El exponente no puede ser negativo, ingresa otro: ";cin>>exp;
    }
    cout<<">>El numero "<<a<<" elevado a "<<exp<<" es igual a "<<pow(a,exp)<<endl;
    cout<<"Presiona cualquier tecla para volver al menu!"<<endl;
    getch();
}

void Raiz(){
    double a;
    cout<<">Ingresa un numero: ";cin>>a;
    while(a < 0){
        cout<<"!>El numero no puede ser negativo, elige otro: ";cin>>a;
    }
    cout<<">>La raiz cuadrada de "<<a<<" es "<<sqrt(a)<<endl; 
    cout<<"Presiona cualquier tecla para volver al menu!"<<endl;
    getch();
}