#include "Tanque.h"
#include <winbgim.h>
#include <iostream>
using namespace std;

Tanque::Tanque(int x,int y): x(x),y(y) {

}
void Tanque::setX(int x){
    this->x+=x;
}
int Tanque::getX(){
    return x;
}
void Tanque::setY(int y){
    this->y=y;
}
int Tanque::getY(){
    return x;
}
void Tanque::pintarTanque(int a){
    switch (a){
    case 1://pinta
        setcolor(COLOR(89,249,40));
         for(int i=7;i>0;i--) rectangle(x-i,y-i,x+i,y+i);
         setcolor(COLOR(13, 52, 253));
         rectangle(x-7,y-7,x+7,y+7);
         //bagon izquierdo
         setcolor(COLOR(89,249,40));
         for(int i=7;i>0;i--) rectangle((x-17)-i,y-i,(x-17)+i,y+i);
         setcolor(COLOR(13, 52, 253));
         rectangle(x-24,y-7,x-10,y+7);
         //bagon derecho
         setcolor(COLOR(89,249,40));
         for(int i=7;i>0;i--) rectangle((x+17)-i,y-i,(x+17)+i,y+i);
         setcolor(COLOR(13, 52, 253));
         rectangle(x+10,y-7,x+24,y+7);
         //bagon superior izquierdo
         setcolor(COLOR(89,249,40));
         for(int i=7;i>0;i--) rectangle((x-10)-i,(y-16)-i,(x-10)+i,(y-16)+i);
         setcolor(COLOR(13, 52, 253));
         rectangle(x-17,y-23,x-3,y-9);
         //bagon superior derecho
         setcolor(COLOR(89,249,40));
         for(int i=7;i>0;i--) rectangle((x+10)-i,(y-16)-i,(x+10)+i,(y-16)+i);
         setcolor(COLOR(13, 52, 253));
         rectangle(x+17,y-23,x+3,y-9);
         //rueda centro
         setcolor(COLOR(13, 52, 253));
         for(int i=7;i>0;i--) circle(x,y+16,i);
         setcolor(COLOR(13, 52, 253));
         circle(x,y+16,7);
         //rueba izquierda
         setcolor(COLOR(13, 52, 253));
         for(int i=7;i>0;i--) circle(x-16,y+16,i);
         setcolor(COLOR(13, 52, 253));
         circle(x-16,y+16,7);
         //rueba izquierda izquierda
         setcolor(COLOR(13, 52, 253));
         for(int i=7;i>0;i--) circle(x-32,y+16,i);
         setcolor(COLOR(13, 52, 253));
         circle(x-32,y+16,7);
         //rueda derecha
         setcolor(COLOR(13, 52, 253));
         for(int i=7;i>0;i--) circle(x+16,y+16,i);
         setcolor(COLOR(13, 52, 253));
         circle(x+16,y+16,7);
         //rueda derecha derecha
         setcolor(COLOR(13, 52, 253));
         for(int i=7;i>0;i--) circle(x+32,y+16,i);
         setcolor(COLOR(13, 52, 253));
         circle(x+32,y+16,7);
        break;
    case 2://Despinta
        setcolor(0);//negro
         for(int i=7;i>0;i--) rectangle(x-i,y-i,x+i,y+i);
         rectangle(x-7,y-7,x+7,y+7);
         //bagon izquierdo
         for(int i=7;i>0;i--) rectangle((x-17)-i,y-i,(x-17)+i,y+i);
         rectangle(x-24,y-7,x-10,y+7);
         //bagon derecho
         for(int i=7;i>0;i--) rectangle((x+17)-i,y-i,(x+17)+i,y+i);
         rectangle(x+10,y-7,x+24,y+7);
         //bagon superior izquierdo
         for(int i=7;i>0;i--) rectangle((x-10)-i,(y-16)-i,(x-10)+i,(y-16)+i);
         rectangle(x-17,y-23,x-3,y-9);
         //bagon superior derecho
         for(int i=7;i>0;i--) rectangle((x+10)-i,(y-16)-i,(x+10)+i,(y-16)+i);
         rectangle(x+17,y-23,x+3,y-9);
         //rueda centro
         for(int i=7;i>0;i--) circle(x,y+16,i);
         circle(x,y+16,7);
         //rueba izquierda
         for(int i=7;i>0;i--) circle(x-16,y+16,i);
         circle(x-16,y+16,7);
         //rueba izquierda izquierda
         for(int i=7;i>0;i--) circle(x-32,y+16,i);
         circle(x-32,y+16,7);
         //rueda derecha
         for(int i=7;i>0;i--) circle(x+16,y+16,i);
         circle(x+16,y+16,7);
         //rueda derecha derecha
         for(int i=7;i>0;i--) circle(x+32,y+16,i);
         circle(x+32,y+16,7);
        break;
    }
    //bagon centro


}
void Tanque::moverTanque(){
    int a;
    pintarTanque(1);
    while(1){

        a=getch();
        pintarTanque(2);
        cout<<a<<endl;
        switch(a){
        case 77://derecha
            x+=7;
            pintarTanque(1);
            break;
        case 75://izquierda
            x-=7;
            pintarTanque(1);
            break;
        }

    }

}
