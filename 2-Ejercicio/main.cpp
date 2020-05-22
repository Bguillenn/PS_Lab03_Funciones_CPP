#include <iostream>

using namespace std;

double AreaCuadrilateros(double lado_a, double lado_b);
double AreaTriangulos(double lado_a, double altura_b);

int main(){

    double a,b; int fig;
    double area;

    cout << "¿Que figura quiere analizar? 1(CUADRADO) 2(RECTANGULO) 3(TRIANGULO): ";cin >> fig;

    switch(fig){
        case 1:
            cout <<"Ingresa la medida del lado del cuadrado: "; cin>>a;
            area = AreaCuadrilateros(a,a);
            if(area < 0)
                cout<<"El area es negativa!"<<endl;
            else
                cout<<"El area del cuadrado es: "<<area<<endl;
            break;
        case 2:
            cout <<"Ingresa el ancho: ";cin>>a;
            cout <<"Ingresa el largo: ";cin>>b;
            area = AreaCuadrilateros(a,b);
            if(area < 0)
                cout<<"El area es negativa!"<<endl;
            else
                cout<<"El area del rectangulo es: "<<area<<endl;
            break;
        case 3:
            cout <<"Ingresa la base: ";cin>>a;
            cout <<"Ingresa la altura: ";cin>>b;
            area = AreaTriangulos(a,b);
            if(area < 0)
                cout<<"El area es negativa!"<<endl;
            else
                cout<<"El area del triangulo es: "<<area<<endl;
            break;
            break;
        default:
            cout <<"Figura incorrecta"<<endl;
    }
    return 0;
}

double AreaCuadrilateros(double lado_a, double lado_b){
    return lado_a*lado_b;    
}

double AreaTriangulos(double lado_a, double altura_b){
    return (lado_a*altura_b)/2;
}

