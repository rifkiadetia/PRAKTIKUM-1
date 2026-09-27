#include <iostream>
using namespace std;

int main() {

    // ==========================================
    // 1. ARRAY 1 DIMENSI
    // ==========================================
    int arrayA[5] = {2, 5, 3, 2, 4};

    cout << "=== ARRAY 1 DIMENSI ===" << endl;
    cout << "Array A = ";

    for (int i = 0; i < 5; i++) {
        cout << arrayA[i] << " ";
    }

    cout << endl << endl;


    // ==========================================
    // 2. MATRIKS A DAN B
    // ==========================================
    int A[2][2] = {
        {1, 2},
        {1, 2}
    };

    int B[2][2] = {
        {2, 2},
        {1, 1}
    };

    int jumlah[2][2];
    int perkalian[2][2];


    // ==========================================
    // PENJUMLAHAN A + B
    // ==========================================
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            jumlah[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "=== A + B ===" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << jumlah[i][j] << " ";
        }
        cout << endl;
    }


    // ==========================================
    // PERKALIAN A x B
    // ==========================================
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            perkalian[i][j] = 0;

            for (int k = 0; k < 2; k++) {
                perkalian[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << endl << "=== A x B ===" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << perkalian[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}