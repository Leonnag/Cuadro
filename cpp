#include <stdio.h>
#include <conio.h> // Librería para manejo de teclado en Windows

void imprimirCuadro(int x, int y) {
    system("cls"); // Limpiar pantalla en Windows (cambiar a "clear" en Linux/Mac)
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int x = 10, y = 5; // Tamaño inicial del cuadro
    char tecla;

    do {
        imprimirCuadro(x, y);
        printf("\nUtiliza las teclas W, A, S, D para mover el cuadro. Presiona Q para salir.\n");
        tecla = getch(); // Capturar tecla presionada sin necesidad de Enter

        switch (tecla) {
            case 'w':
            case 'W':
                y--;
                break;
            case 'a':
            case 'A':
                x--;
                break;
            case 's':
            case 'S':
                y++;
                break;
            case 'd':
            case 'D':
                x++;
                break;
            default:
                break;
        }

    } while (tecla != 'q' && tecla != 'Q');

    printf("\nSaliendo del programa...\n");

    return 0;
}
