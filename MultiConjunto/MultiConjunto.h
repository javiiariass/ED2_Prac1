#ifndef MULTICONJUNTO_H
#define MULTICONJUNTO_H

#include <iostream>

template <typename T>
class MultiConjunto
{
private:
    // Vector de almacenamiento de elementos
    T c[100];
    // Indica el número de elementos en el multiconjunto
    int num;

    // ------------------------- auxiliares --------------------
    // Desplaza todos los elementos hacia la izquierda desde esa posición
    void desplaza(const int &posicion);

public:
    // Constructor
    MultiConjunto();
    // Comprueba si el multiconjunto es o no vacío
    bool esVacio() const;
    // Devuelve el número de elementos
    int cardinalidad() const { return num; }
    // Añade un objeto de tipo T al multiconjunto
    // Se permiten elementos repetidos
    void anade(const T &objeto);
    // Elimina todas las ocurrencias del objeto
    // pasado como parámetro
    void elimina(const T &objeto);
    // Comprueba si el objeto pasado como parámetro
    // existe en el multiconjunto
    bool pertenece(const T &objeto) const;

    // Sobrecarga del operador de inserción para mostrar el multiconjunto
    friend std::ostream& operator<<(std::ostream& os, const MultiConjunto<T>& mc) {
        os << "{";
        for (int i = 0; i < mc.num; i++) {
            os << mc.c[i];
            if (i < mc.num - 1) {
                os << ", ";
            }
        }
        os << "}";
        return os;
    }
};

#endif
