#include <iostream>
#include "Fie.h"

using namespace std;

int main() {

    Alumno alumno1(1, "Braian");
    Alumno alumno2(2, "Juan");
    alumno1.agregarMateria(Materia("Matematica", 10));
    alumno1.agregarMateria(Materia("Fisica", 5));
    alumno1.agregarMateria(Materia("Quimica", 8));
    alumno1.agregarMateria(Materia("Historia", 9));
    alumno1.agregarMateria(Materia("Geografia", 7));
    alumno2.agregarMateria(Materia("Matematica", 10));
    alumno2.agregarMateria(Materia("Fisica", 10));
    alumno2.agregarMateria(Materia("Quimica", 5));
    alumno2.agregarMateria(Materia("Historia", 9));
    alumno2.agregarMateria(Materia("Geografia", 7));



    Fie fie;
    fie.agregarAlumno(alumno1);
    fie.agregarAlumno(alumno2);

    fie.mostrarMejorPromAlumno();
    fie.mostrarMejorPromAlumnoMateria();

    fie.mostrarGanadorPremio();





    return 0;
}
