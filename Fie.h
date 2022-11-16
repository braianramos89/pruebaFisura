
#ifndef PRUEBAFISURA_FIE_H
#define PRUEBAFISURA_FIE_H
#include <iostream>
#include "Alumno.h"

#include <vector>


using namespace std;

class Fie {

private:
    vector<Alumno> alumnos;
    vector<Materia> materias;
public:
    Fie();
    ~Fie();
    void agregarAlumno(Alumno alumno);
    void mostrarMejorPromAlumno();
    float calcularMejorPromAlumno();
    void mostrarMejorPromAlumnoMateria();
    void mostrarGanadorPremio();


};


#endif //PRUEBAFISURA_FIE_H
