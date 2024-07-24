#include <iostream>
#include <windows.h>  // Para las funciones Sleep y COORD

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    int xcol, vcolor;

    system("cls");  // Limpia la pantalla

    // Primera línea
    setColor(14);
    gotoxy(1, 2);
    cout << (char)201;
    gotoxy(1, 3);
    cout << (char)186;
    gotoxy(1, 4);
    cout << (char)200;

    for (xcol = 2; xcol <= 79; xcol++) {
        gotoxy(xcol, 2);
        cout << (char)205;
		gotoxy(xcol, 4);
        cout << (char)205;
        Sleep(50);
    }

    gotoxy(80, 2);
    cout << (char)187;
    gotoxy(80, 3);
    cout << (char)186;
    gotoxy(80, 4);
    cout << (char)188;

    // Segunda línea
    string vtitulo = " Emmanuelito18 ";
    int vlongitud = vtitulo.length();
    int vcentro = (((80 - vlongitud) / 2) + 1);

    //gotoxy(vcentro, 9);

    for (xcol = 2; xcol <= vcentro; xcol++) {
        vcolor = rand() % 15;
        setColor(vcolor);
        gotoxy(xcol, 3);
        cout << vtitulo;
        Sleep(100);
    }
    setColor(15);
	gotoxy(1,5);
	cout<<endl;
    system("pause");
    return 0;
}
