//AXEL HERNANDEZ Y JUAN PABLO TOAPANTA
#include <stdio.h>
#include "libro.h"

void registrarLibro(struct Libro libros[], int *n) {
    if (*n >= MAX_LIBROS) {
        printf("No se pueden agregar más libros.\n");
        return;
    }

    printf("ID: ");
    scanf("%d", &libros[*n].id);

    printf("Titulo: ");
    scanf(" %[^\n]", libros[*n].titulo);

    printf("Autor: ");
    scanf(" %[^\n]", libros[*n].autor);

    printf("Year: ");
    scanf("%d", &libros[*n].anio);

    printf("Estado (Disponible/Prestado): ");
    scanf("%s", libros[*n].estado);

    (*n)++;
    printf("Libro registrado.\n");
}

void mostrarLibros(struct Libro libros[], int n) {
    if (n == 0) {
        printf("No hay libros registrados.\n");
        return;
    }

    printf("\nID | Titulo | Autor | Año | Estado\n");
    for (int i = 0; i < n; i++) {
        printf("%d | %s | %s | %d | %s\n",
               libros[i].id,
               libros[i].titulo,
               libros[i].autor,
               libros[i].anio,
               libros[i].estado);
    }
}

void buscarLibro(struct Libro libros[], int n) {
    int id;
    printf("Ingrese ID a buscar: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++) {
        if (libros[i].id == id) {
            printf("Titulo: %s\n", libros[i].titulo);
            printf("Autor: %s\n", libros[i].autor);
            printf("Año: %d\n", libros[i].anio);
            printf("Estado: %s\n", libros[i].estado);
            return;
        }
    }
    printf("Libro no encontrado.\n");
}

void actualizarEstado(struct Libro libros[], int n) {
    int id;
    printf("Ingrese ID del libro: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++) {
        if (libros[i].id == id) {
            printf("Nuevo estado (Disponible/Prestado): ");
            scanf("%s", libros[i].estado);
            printf("Estado actualizado.\n");
            return;
        }
    }
    printf("Libro no encontrado.\n");
}

void eliminarLibro(struct Libro libros[], int *n) {
    int id;
    printf("Ingrese ID del libro a eliminar: ");
    scanf("%d", &id);

    for (int i = 0; i < *n; i++) {
        if (libros[i].id == id) {
            for (int j = i; j < *n - 1; j++) {
                libros[j] = libros[j + 1];
            }
            (*n)--;
            printf("Libro eliminado.\n");
            return;
        }
    }
    printf("Libro no encontrado.\n");
}
    