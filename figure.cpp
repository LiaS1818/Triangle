#include<iostream>
#include<conio.h>
using namespace std;

class Triangulo
{
private:
    int length;
public:
    Triangulo(/* args */);
    void setLength(int);
    int getLength();
    void drawTriangle();
};

Triangulo::Triangulo(/* args */)
{
}

void Triangulo::setLength(int length){
    if (length<0)
    {
         length = length * -1;
         this ->length = length;
        cout<<"Valor incorrecto.\n Se ha modificado a un valor valido";
    }
    this -> length = length;
}

int Triangulo::getLength(){
    return this-> length;
}

void Triangulo::drawTriangle(){
    int opcion;
    cout<<"Se puede elegir dibujar: \n1)Triangulo Normal\n2)Triangulo Invertido\n ";
    cin>>opcion;
    if (opcion==1)
    {
        for (int i = 0; i < length+1; i++)
        {
            for (int j = 0; j < i ; j++)
            {
                cout<<" * ";
            }
            cout<<endl;
        }
        
    }else
        for (int i = length; i > 0; i--)
        {
            for (int j = 0; j <  i; j++)
            {
                cout<<" * ";
            }
            cout<<endl;
        }
}
int main(){
    int lenght;
    Triangulo triangle1;

    cout<<"Longitud de triangulo";
    cin>>lenght;
    triangle1.setLength(lenght);
    
    cout<<"Longitud: "<<triangle1.getLength();
    triangle1.drawTriangle();
    //triangulo1.drawTriangle(longitud);
    system("pause");
    return 0;
}


/*
           #####* * * * *#####     
           ##* * * * * * * *## 
           #* * * * * * * * *#
           * * * * * * * * * * 
           * * * * * * * * * * 
           * * * * * * * * * *
           * * * * * * * * * *
           * * * * * * * * * *
           #* * * * * * * * *# 
           ##* * * * * * * *##
           #####* * * * *#####
            
*/