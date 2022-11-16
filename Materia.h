
#ifndef PRUEBAFISURA_MATERIA_H
#define PRUEBAFISURA_MATERIA_H
#include <iostream>


using namespace std;

class Materia {

private:
    string nombre;
    float nota;

public:
    Materia(string nombre, float nota);
    ~Materia();
    string getNombre();
    float getNota();

};
inline string Materia::getNombre() {
    return nombre;
}
inline float Materia::getNota() {
    return nota;
}

#endif //PRUEBAFISURA_MATERIA_H
