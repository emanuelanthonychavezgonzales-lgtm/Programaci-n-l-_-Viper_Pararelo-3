#include <iostream>
#include <conio.h>
#include <windows.h>


using namespace std;
// Variables que almacenan la posición actual de la serpiente
int x = 10, y = 10;
char tecla;
// Dibuja el mapa y muestra la posición de la serpiente
void dibujarMapa() {
    system("cls");

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {

            // serpiente
            if (i == y && j == x)
                cout << "O ";
            else
                cout << ". ";
        }
        cout << endl;
    }

    cout << "\nMover con W A S D";
}
// Detecta las teclas WASD y actualiza la posición de la serpiente
void mover() {

    if (_kbhit()) {
        tecla = _getch();

        switch (tecla) {
        case 'w':
            y--;
            break;

        case 's':
            y++;
            break;

        case 'a':
            x--;
            break;

        case 'd':
            x++;
            break;
        }
    }
}

int main() {

    while (true) {
        dibujarMapa();
        mover();
        Sleep(100);
    }

    return 0;
}
