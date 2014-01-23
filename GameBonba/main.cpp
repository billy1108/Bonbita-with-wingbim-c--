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
    cout<<one.getX()<<endl<<endl;
    int tecla,jugadas=0;
    while(1){
        if(kbhit()){
            if(jugadas<10){//jugador uno
                one.pintarTanque(2);two.pintarTanque(2);//borra
                tecla = getch();
                cout<<tecla<<endl;
                switch(tecla){
                case 77://derecha
                    cout<<"VALOR ORIGINAL : "<<one.getX()<<endl;
                    one.setX(7);
                    cout<<"VALOR INCREMENTADO : "<<one.getX()<<endl;
                    one.pintarTanque(1);two.pintarTanque(1);//pinta
                    break;
                case 75://izquierda
                    one.setX(-7);
                    one.pintarTanque(1);two.pintarTanque(1);//pinta
                    break;
                }
                jugadas++;
            }else if(jugadas<20){//jugados dos
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
                }
                jugadas++;
            }else{
                one.pintarTanque(1);two.pintarTanque(1);//pinta
                jugadas=0;
            }
        }
    }
    getch();
    return 0;
}
