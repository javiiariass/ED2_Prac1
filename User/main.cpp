#include <iostream>
#include "MultiConjunto.h"
#include "Persona.h"

using namespace std;

int main()
{
    cout << "=== PRUEBAS CON MULTICONJUNTO DE ENTEROS ===" << endl;
    MultiConjunto<int> mcInt;

    // Inserciones
    mcInt.anade(5);
    mcInt.anade(10);
    mcInt.anade(5);
    mcInt.anade(20);

    cout << "Conjunto actual de enteros: " << mcInt << endl;
    cout << "Cardinalidad tras insertar (5, 10, 5, 20): " << mcInt.cardinalidad() << endl;
    cout << "¿Pertenece el 5?: " << (mcInt.pertenece(5) ? "Si" : "No") << endl;
    cout << "¿Pertenece el 15?: " << (mcInt.pertenece(15) ? "Si" : "No") << endl;

    // Borrados
    cout << "Eliminando todos los '5'..." << endl;
    mcInt.elimina(5);
    cout << "Conjunto actual de enteros: " << mcInt << endl;
    cout << "Cardinalidad tras borrar los 5: " << mcInt.cardinalidad() << endl;
    cout << "¿Pertenece el 5?: " << (mcInt.pertenece(5) ? "Si" : "No") << endl;

    cout << "\n=== PRUEBAS CON MULTICONJUNTO DE CARACTERES ===" << endl;
    MultiConjunto<char> mcChar;

    // Inserciones
    mcChar.anade('A');
    mcChar.anade('B');
    mcChar.anade('C');
    mcChar.anade('A');

    cout << "Conjunto actual de caracteres: " << mcChar << endl;
    cout << "Cardinalidad tras insertar ('A', 'B', 'C', 'A'): " << mcChar.cardinalidad() << endl;
    cout << "¿Es vacio?: " << (mcChar.esVacio() ? "Si" : "No") << endl;

    // Borrados
    cout << "Eliminando todas las 'A'..." << endl;
    mcChar.elimina('A');
    cout << "Conjunto actual de caracteres: " << mcChar << endl;
    cout << "Cardinalidad tras borrar las 'A': " << mcChar.cardinalidad() << endl;

    cout << "\n=== PRUEBAS CON MULTICONJUNTO DE PERSONAS ===" << endl;
    MultiConjunto<Persona> mcPersona;

    // Inserciones
    mcPersona.anade(Persona("Javier", 20));
    mcPersona.anade(Persona("Ana", 22));
    mcPersona.anade(Persona("Javier", 20)); // intencionadamente repetido
    mcPersona.anade(Persona("Luis", 25));

    cout << "Conjunto actual de personas: " << mcPersona << endl;
    cout << "Cardinalidad tras insertar (4 personas): " << mcPersona.cardinalidad() << endl;
    cout << "¿Pertenece Ana(22)?: " << (mcPersona.pertenece(Persona("Ana", 22)) ? "Si" : "No") << endl;

    // Borrados
    cout << "Eliminando a todos los 'Javier (20)'..." << endl;
    mcPersona.elimina(Persona("Javier", 20));
    cout << "Conjunto actual de personas: " << mcPersona << endl;
    cout << "Cardinalidad tras borrar: " << mcPersona.cardinalidad() << endl;

    return 0;
}
