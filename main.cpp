// librerias
#include <iostream>
using std::cout;
using std::endl;

// clase Padre (Super clase)
class Padre
{
    public:
    int x = 5;

    void imprimir()
    {
        cout << "El valor de x: " << x << endl;
    }
};

// clase hija (Sub clase)
class Hija : Padre // hereda todo de la clase padre
{
    public:
    void imprimir()
    {
        cout << "El valor de x: " << x << endl;
    }
};

// Funcion main
int main()
{
    Hija h;
    h.imprimir();
    //Padre p;
    //p.x = 10;
    //p.imprimir();
    return 0;
};
