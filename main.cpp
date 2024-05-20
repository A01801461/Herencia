// HERENCIA
// todo esta en archivo main, por practicidad

// librerias
#include <iostream>
using std::cout;
using std::endl;

// Clase Padre (Superclase)
class Padre
{
protected: // Haciendo 'x' accesible para las clases derivadas
    int x;

public:
    void imprimir()
    {
        cout << "El valor de x en Padre: " << x << endl;
    }

    // Constructor con parámetro
    Padre(int x1)
    {
        x = x1 + 5;
    }
};

// Clase Hija (Subclase)
class Hija : public Padre // Herencia pública
{
private:
    int y;

public:
    void imprimir() // Sobreescribiendo el método imprimir
    {
        Padre::imprimir(); // Llamada al método imprimir de Padre
        cout << "El valor de y en Hija: " << y << endl;
    }

    // Constructor con parámetros para Hija y Padre
    Hija(int x1, int y1) : Padre(x1) // Inicializa Padre
    {
        y = y1;
    }
};

// Función main
int main()
{
    Hija h(10, 20); // Instancia de Hija con parámetros
    h.imprimir(); // Llama a imprimir que muestra valores de 'x' y 'y'
    return 0;
}
