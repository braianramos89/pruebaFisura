//
// Created by braian on 15/11/2022.
//

#include "Alumno.h"

Alumno::Alumno(int codigo, string nombre) {
    this->codigo = codigo;
    this->nombre = nombre;
}

Alumno::~Alumno() {
}

float Alumno::calcularPromedioMateria() {
    float promedio = 0;
    for (int i = 0; i < 5; ++i) {
        promedio += materias[i].getNota();
    }
    return promedio / 5;
}

void Alumno::agregarMateria(Materia materia) {

    Materia* materia1 = new Materia(materia.getNombre(), materia.getNota());
    materias.push_back(*materia1);
}


float Alumno::sumaTotalNotasAlumno() {
    float sumaTotal = 0;
    for (int i = 0; i < materias.size(); ++i) {
        sumaTotal += materias[i].getNota();
    }
    return sumaTotal;
}