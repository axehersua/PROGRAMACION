//AXEL HERNANDEZ Y JUAN PABLO TOAPANTA
#ifndef LIBRO_H
#define LIBRO_H

#define MAX_LIBROS 10

struct Libro {
    int id;
    char titulo[100];
    char autor[50];
    int anio;
    char estado[10]; 
};


void registrarLibro(struct Libro libros[], int *n);
void mostrarLibros(struct Libro libros[], int n);
void buscarLibro(struct Libro libros[], int n);
void actualizarEstado(struct Libro libros[], int n);
void eliminarLibro(struct Libro libros[], int *n);

#endif
