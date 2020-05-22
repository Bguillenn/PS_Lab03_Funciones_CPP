#include <iostream>
#include <conio.h>
#include <ctime>
//Declaracion de Funciones
int lanzarDado();
int verificarJugada(int d1, int d2, int&); //1-Win 2-Lose 3-Continue
void mostrarResultados(int);

using namespace std;
bool PRIMERA_JUGADA = true;

int main(){
    srand(time(0));
    int d1,d2,punto=0;
    int game_status;

    do
    {
        cout<<"Lanzando dados!.."<<endl;
        d1 = lanzarDado();
        d2 = lanzarDado();
        cout<<"Salieron los dados "<<d1<<" y "<<d2<<endl;
        cout<<"La suma es: "<<(d1+d2)<<endl;
        game_status = verificarJugada(d1,d2,punto);
        mostrarResultados(game_status);
        if(punto != 0) cout<<"OBJETIVO: "<<punto<<endl;
        cout<<"Presiona cualquier tecla para continuar"<<endl;
        cout<<"================================================"<<endl;
        getch();

    } while (game_status == 3);
    
    

    return 0;
}

int lanzarDado(){
    return ( 1 + rand() % 6 );
}

int verificarJugada(int d1, int d2, int& punto){
    int sum_dados = d1+d2;
    if(PRIMERA_JUGADA){
        if(sum_dados == 7 || sum_dados == 11) return 1;
        if(sum_dados == 2 || sum_dados == 3 || sum_dados == 12) return 2;
        punto = sum_dados;
        PRIMERA_JUGADA = false;
        return 3;
    }

    if(punto == sum_dados) return 1;
    if(sum_dados == 7) return 2;
    return 3;
}

void mostrarResultados(int game_status){
    //VALIDAMOS EL ESTADO DEL JUEGO
    cout<<">>>";
    switch (game_status){
    case 1:
        cout<<"FELICIDADES GANASTE EL JUEGO!!!"<<endl;
        break;
    case 2:
        cout<<"PERDISTE :c"<<endl;
        break;
    case 3:
        cout<<"SIGUES EN EL JUEGO! :D"<<endl;
        break;
    default:
        cout<<"ERROR: Estado de juego desconocido"<<endl;
        break;
    }
}

