#ifndef PRUEBAFISURA_ALUMNO_H
#define PRUEBAFISURA_ALUMNO_H
#include <iostream>
#include "Materia.h"
#include <vector>



using namespace std;
class Alumno {

private:
    int codigo;
    string nombre;
public:
    Alumno(int codigo, string nombre);
    ~Alumno();
    int getCodigo();
    string getNombre();
    float calcularPromedioMateria();
    void agregarMateria(Materia materia);
    vector<Materia> materias;
    float sumaTotalNotasAlumno();
};
inline int Alumno::getCodigo() {
    return codigo;
}
inline string Alumno::getNombre() {
    return nombre;
}





#endif //PRUEBAFISURA_ALUMNO_H
