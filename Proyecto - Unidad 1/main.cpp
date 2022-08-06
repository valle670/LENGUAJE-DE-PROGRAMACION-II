#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
      
    int opcion=0;
   
    while(true){
    cout <<"-----------------------------------------------" << endl;
    cout <<"-               MENU DE JUEGOS             -" << endl;
    cout <<"-----------------------------------------------" << endl;
    cout << endl;
    cout << "Ingrese una opcion: " << endl;
    cout << "1 - Startship" << endl;
    cout << "2 - Snake" << endl;
  
    cin >> opcion;
   
    switch(opcion){

    case 1: starShip();
    break;
    case 2: snake();
    break;
    default:   
    break;
    }
} if(opcion==0){
    system("pause");
}
    return 0;
}
