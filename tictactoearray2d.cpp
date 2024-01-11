#include <iostream>
using namespace std;

char papan[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

void menampilkanteks() {
    cout << "+-------------------------+\n";
    cout << "| Nama : M. Agung Pratama |\n";
    cout << "| Kelas: A                |\n";
    cout << "| NIM  : 2300018005       |\n";
    cout << "+-------------------------+\n";
}

void papantictactoe() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << papan[i][j];
            if (j < 2) {
                cout << " | ";
            }
        }
        cout << endl;
        if (i < 2) {
            cout << "------------" << endl;
        }
    }
    cout << endl;
}

bool check(char papan[3][3], char simbolpemain) {
    for (int i = 0; i < 3; i++) {
        if (papan[i][0] == simbolpemain && papan[i][1] == simbolpemain && papan[i][2] == simbolpemain) {
            return true; 
        }
        if (papan[0][i] == simbolpemain && papan[1][i] == simbolpemain && papan[2][i] == simbolpemain) {
            return true; 
        }
    }
    if (papan[0][0] == simbolpemain && papan[1][1] == simbolpemain && papan[2][2] == simbolpemain) {
        return true;
    }
    if (papan[0][2] == simbolpemain && papan[1][1] == simbolpemain && papan[2][0] == simbolpemain) {
        return true; 
    }
    return false;
}

bool papanfull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (papan[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

void inv(char input) {
    int baris, kolom;
    cout << "Player " << input << " masukkan baris (1-3): ";
    cin >> baris;
    cout << "Player " << input << " masukkan kolom (1-3): ";
    cin >> kolom;

    baris--;  
    kolom--;  

    if (baris >= 0 && baris < 3 && kolom >= 0 && kolom < 3 && papan[baris][kolom] == ' ') {
        papan[baris][kolom] = input;
    } else {
        cout << "Langkah tidak valid. Silakan coba lagi.\n";
        inv(input); 
    }
}

int main() {
    menampilkanteks();
    char currentPlayer = 'X'; 

    while (true) {
        papantictactoe();
        inv(currentPlayer);

        if (check(papan, currentPlayer)) {
            cout << "Pemain " << currentPlayer << " menang!\n";
            break;
        }

        if (papanfull()) {
            cout << "Permainan seri!\n";
            break;
        }

 
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
