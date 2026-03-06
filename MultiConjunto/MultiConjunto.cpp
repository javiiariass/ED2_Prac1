#include "MultiConjunto.h"

// Podríamos tener en cuenta si posiciones nulas pero vamos a usar
// como método de control el atributo `num` únicamente

// template <typename E> mi_tipo<E>::mi_tipo (E nelem)
// {
// }


template <typename E> MultiConjunto<E>::MultiConjunto()
{
    num = 0;
}



template <typename E> bool MultiConjunto<E>::esVacio() const{
    return num == 0 ? true : false;
}


template class MultiConjunto<int>;
template class MultiConjunto<char>;
