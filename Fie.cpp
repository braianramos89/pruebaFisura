//
// Created by braian on 15/11/2022.
//

#include "Fie.h"

Fie::Fie() {

}

Fie::~Fie() {

}

void Fie::agregarAlumno(Alumno alumno) {
    alumnos.push_back(alumno);
}

void Fie::mostrarMejorPromAlumno() {
    float mejorPromedio = 0;
    string mejorAlumno = "";
    for (int i = 0; i < alumnos.size(); ++i) {
        if (alumnos[i].calcularPromedioMateria() > mejorPromedio) {
            mejorPromedio = alumnos[i].calcularPromedioMateria();
            mejorAlumno = alumnos[i].getNombre();
        }
    }
    cout << "El mejor alumno es: " << mejorAlumno << " con un promedio de: " << mejorPromedio << endl;
}

void Fie::mostrarMejorPromAlumnoMateria() {
    float mejorPromedio = 0;
    string mejorAlumno = "";
    string mejorMateria = "";
    for (int i = 0; i < alumnos.size(); ++i) {
        for (int j = 0; j < alumnos[i].materias.size(); ++j) {
            if (alumnos[i].materias[j].getNota() > mejorPromedio) {
                mejorPromedio = alumnos[i].materias[j].getNota();
                mejorAlumno = alumnos[i].getNombre();
                mejorMateria = alumnos[i].materias[j].getNombre();
            }
        }
    }
    cout << "El mejor alumno es: " << mejorAlumno << " con un promedio de: " << mejorPromedio << " en la materia: " << mejorMateria << endl;
}

float Fie::calcularMejorPromAlumno() {
    float mejorPromedio = 0;
    for (int i = 0; i < alumnos.size(); ++i) {
        if (alumnos[i].calcularPromedioMateria() > mejorPromedio) {
            mejorPromedio = alumnos[i].calcularPromedioMateria();
        }
    }
    return mejorPromedio;
}

void Fie::mostrarGanadorPremio() {
    float mejorPromedio = calcularMejorPromAlumno();
    string mejorAlumno = "";
    float sumaTotal = 0;
    for (int i = 0; i < alumnos.size(); ++i) {
        if (alumnos[i].calcularPromedioMateria() == mejorPromedio) {
            mejorAlumno = alumnos[i].getNombre();
            sumaTotal = alumnos[i].sumaTotalNotasAlumno() * 300;
            cout << "El ganador del premio es: " << mejorAlumno << " gano "<< sumaTotal << endl;
        }
    }
}

