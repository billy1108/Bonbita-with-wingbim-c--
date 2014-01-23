#include <iostream>
#include <winbgim.h>
#include <conio.h>
#include "Tanque.h"
using namespace std;

int main()
{
    initwindow(700,700);
    Tanque one(300,300);
    Tanque two(600,300);
    one.pintarTanque(1);two.pintarTanque(1);//pinta
    int tecla,jugadas=1;
    while(1){
        if(kbhit()){
            if(jugadas==1){//jugador uno
                one.pintarTanque(2);two.pintarTanque(2);//borra
                tecla = getch();
                cout<<tecla<<endl;
                switch(tecla){
                case 77://derecha
                    one.setX(7);
                    one.pintarTanque(1);two.pintarTanque(1);//pinta
                    break;
                case 75://izquierda
                    one.setX(-7);
                    one.pintarTanque(1);two.pintarTanque(1);//pinta
                    break;
                case 13:
                    jugadas=2;
                    one.pintarTanque(1);two.pintarTanque(1);//pinta
                    break;
                default:
                    one.pintarTanque(1);two.pintarTanque(1);//pinta
                    break;
                }
            }else if(jugadas==2){//jugados dos
                one.pintarTanque(2);two.pintarTanque(2);//borra
                tecla = getch();
                switch(tecla){
                case 77://derecha
                    two.setX(7);
                    one.pintarTanque(1);two.pintarTanque(1);//pinta
                    break;
                case 75://izquierda
                    two.setX(-7);
                    one.pintarTanque(1);two.pintarTanque(1);//pinta
                    break;
                case 13:
                    jugadas=1;
                    one.pintarTanque(1);two.pintarTanque(1);//pinta
                    break;
                default:
                    one.pintarTanque(1);two.pintarTanque(1);//pinta
                    break;
                }
            }
        }
    }
    getch();
    return 0;
}
