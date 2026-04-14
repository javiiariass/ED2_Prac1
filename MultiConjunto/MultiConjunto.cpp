#include "MultiConjunto.h"

// Podríamos tener en cuenta si posiciones nulas pero vamos a usar
// como método de control el atributo `num` únicamente

// template <typename E> mi_tipo<E>::mi_tipo (E nelem)
// {
// }

template <typename T>
MultiConjunto<T>::MultiConjunto()
{
    num = 0;
}

template <typename T>
bool MultiConjunto<T>::esVacio() const
{
    return num == 0 ? true : false;
}

// No controla redimensionado de array
template <typename T>
void MultiConjunto<T>::anade(const T &objeto)
{
    if (sizeof(c) < 100)
        c[num - 1] = objeto;
    else
        std::cout << "Vector ha alcanzado tamanyo maximo\n";
}

template <typename T>
void MultiConjunto<T>::desplaza(const int &posicion)
{
    for (int i = pos; i < num - 1)
    {
        c[i] = c[i + 1];
    }
}

template <typename T>
void MultiConjunto<T>::elimina(const T &objeto)
{
    int pos = -1;

    for (int i = 0; i < num; i++)
    {
        if (c[i] == objeto)
        {
            desplaza(i);
            --i; // Comprobar el nuevo elemento de la pos actual
        }
    }
}

template <typename T>
bool MultiConjunto<T>::pertenece(const T &objeto) const
{
    for (int i = 0; i < num; i++)
    {
        if (c[i] == objeto)
            return true;
    }

    return false;
}

template class MultiConjunto<int>;
template class MultiConjunto<char>;
