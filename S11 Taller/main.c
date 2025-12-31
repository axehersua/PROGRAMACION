//AXEL HERNANDEZ Y JUAN PABLO TOAPANTA
#include <stdio.h>
#include "libro.h"

int main() {
    struct Libro libros[MAX_LIBROS];
    int n = 0;
    int opcion;

    do {
        printf("\n--- MENU BIBLIOTECA ---\n");
        printf("1. Registrar libro\n");
        printf("2. Mostrar libros\n");
        printf("3. Buscar libro\n");
        printf("4. Actualizar estado\n");
        printf("5. Eliminar libro\n");
        printf("6. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1)
            registrarLibro(libros, &n);
        else if (opcion == 2)
            mostrarLibros(libros, n);
        else if (opcion == 3)
            buscarLibro(libros, n);
        else if (opcion == 4)
            actualizarEstado(libros, n);
        else if (opcion == 5)
            eliminarLibro(libros, &n);
        else if (opcion == 6)
            printf("Fin del programa.\n");
        else
            printf("Opcion invalida.\n");

    } while (opcion != 6);

    return 0;
}
