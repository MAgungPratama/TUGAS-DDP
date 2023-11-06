#include <iostream>
using namespace std;

int main() {
    int baris, kolom;
    string pilih;

    cout << "NAMA : M. Agung Pratama\n";
    cout << "NIM  : 2300018005\n";
    cout << "================================================================================\n";
    cout << "|\t\t\tTUGAS DASAR PEMROGRAMAN                                |" << endl;
    cout << "================================================================================" << endl;
    cout << " " << endl;
    cout << "Masukkan Jumlah Baris : ";
    cin >> baris;
    cout << "Masukkan Jumlah Kolom : ";
    cin >> kolom;

    while (baris <= 0 || kolom <= 0) {
        cout << "Jumlah Baris atau Kolom yang dimasukkan tidak valid, silakan masukkan ulang.\n";
        cout << "Masukkan Jumlah Baris : ";
        cin >> baris;
        cout << "Masukkan Jumlah Kolom : ";
        cin >> kolom;
    }

    for (int i = 0; i < (baris * 2 + 1); i++) {
        for (int j = 0; j < (kolom * 2 + 1); j++) {
            if (i == 0 || i % 2 == 0) {
                cout << "_";
            } else if (j == 0 || j % 2 == 0) {
                cout << "|";
            } else {
                cout << " ";
            }
        }
        cout << '\n';
    }

    cout << "Ingin diulangi? (iya atau tidak (silahkan diketik dengan huruf kecil)) : ";
    cin >> pilih;
    cout<<" \n";

    if (pilih == "iya") {
        cout << "Silahkan Masukkan ulang kolom dan baris berikut." << endl;
        do {
            cout << "Masukkan Jumlah Baris : ";
            cin >> baris;
            cout << "Masukkan Jumlah Kolom : ";
            cin >> kolom;

            while (baris <= 0 || kolom <= 0) {
            	cout <<"================================================================================\n";
                cout << "Jumlah Baris atau Kolom yang dimasukkan tidak valid, silakan masukkan ulang.\n";
                cout << "Masukkan Jumlah Baris : ";
                cin >> baris;
                cout << "Masukkan Jumlah Kolom : ";
                cin >> kolom;
            }

            for (int i = 0; i < (baris * 2 + 1); i++) {
                for (int j = 0; j < (kolom * 2 + 1); j++) {
                    if (i == 0 || i % 2 == 0) {
                        cout << "_";
                    } else if (j == 0 || j % 2 == 0) {
                        cout << "|";
                    } else {
                        cout << " ";
                    }
                }
                cout << '\n';
            }
            cout << "Ingin diulangi? (iya atau tidak (silahkan diketik dengan huruf kecil)) : ";
            cin >> pilih;
            cout <<" \n";
        } while (pilih == "iya");
    } else if (pilih == "tidak") {
        cout << "Terima kasih!" << endl;
    } else {
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
