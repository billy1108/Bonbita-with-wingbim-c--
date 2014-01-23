#ifndef TANQUE_H
#define TANQUE_H


class Tanque{
    public:
        Tanque(int,int);
        void setX(int);
        int getX();
        void setY(int);
        int getY();
        void pintarTanque(int);//1 lo pinta del color y 2 lo pinta "0"
        void moverTanque();
    private:
        int x,y;
};

#endif // TANQUE_H
