using namespace std;

int x = 10, y = 10;
char tecla;

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
