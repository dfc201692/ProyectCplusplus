#include <iostream>

using namespace std;

// Clase Padre
class Padre {
protected:
    int atributo1;
    float atributo2;
    char atributo3;

public:
    // Constructores
    Padre() {
        atributo1 = 0;
        atributo2 = 0.0f;
        atributo3 = ' ';
        cout << "Constructor Padre sin parámetros" << endl;
    }

    Padre(int a, float b, char c) {
        atributo1 = a;
        atributo2 = b;
        atributo3 = c;
        cout << "Constructor Padre con parámetros" << endl;
    }

    // Destructor
    ~Padre() {
        cout << "Destructor Padre" << endl;
    }

    // Funciones miembro
    void funcion1() {
        cout << "Función miembro 1 de Padre" << endl;
    }

    void funcion2() {
        cout << "Función miembro 2 de Padre" << endl;
    }

    void funcion3() {
        cout << "Función miembro 3 de Padre" << endl;
    }
};

// Clase Hija
class Hija : public Padre {
public:
    // Constructores
    Hija() : Padre() {
        cout << "Constructor Hija sin parámetros" << endl;
    }

    Hija(int a, float b, char c) : Padre(a, b, c) {
        cout << "Constructor Hija con parámetros" << endl;
    }

    // Destructor
    ~Hija() {
        cout << "Destructor Hija" << endl;
    }

    // Anulación de función miembro del Padre
    void funcion1() {
        cout << "Función miembro 1 de Hija (anulada)" << endl;
    }
};

int main() {
    // Creación de objetos y prueba de funcionalidad
    Padre padre1;
    padre1.funcion1();
    padre1.funcion2();
    padre1.funcion3();

    cout << "------------------------" << endl;

    Padre padre2(1, 2.5f, 'A');
    padre2.funcion1();
    padre2.funcion2();
    padre2.funcion3();

    cout << "------------------------" << endl;

    Hija hija1;
    hija1.funcion1();  // Función anulada
    hija1.funcion2();
    hija1.funcion3();

    return 0;
}