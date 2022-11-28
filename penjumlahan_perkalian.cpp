//NPM-2210631170120
//Kelas-1D
//Farhan Ramadhan Praditya

#include <iostream>
using namespace std;

int main()
{
    typedef double Matriks[10][10];
    Matriks A, B, C;
    int q, w, choose;

    cout << "Pilih Operator Matriks : " << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Perkalian" << endl;
    cout << "Masukkan Pilihan Anda : ";
    cin >> choose;
    cout << endl;

    switch (choose)
    {
    case 1:
        cout << "Matriks A : " << endl;
        for (q = 0; q < 3; q++)
        {
            for (w = 0; w < 3; w++)
            {
                cout << "A [" << q << "] [" << w << "]= ";
                cin >> A[q][w];
            }
        }
        cout << endl;

        cout << "Matriks B : " << endl;
        for (q = 0; q < 3; q++)
        {
            for (w = 0; w < 3; w++)
            {
                cout << "B [" << q << "] [" << w << "]= ";
                cin >> B[q][w];
            }
        }
        cout << endl;

        for (q = 0; q < 3; q++)
        {
            for (w = 0; w < 3; w++)
            {
                C[q][w] = A[q][w] + B[q][w];
            }
        }

        cout << "Hasil Penjumlahan Matriks" << endl;

        for (q = 0; q < 3; q++)
        {
            for (w = 0; w < 3; w++)
            {
                cout << "C [" << q << "]  [" << w << "]= " << C[q][w] << endl;
            }
        }

        cout << endl;

        break;

    case 2:
        cout << "Matriks A : " << endl;
        for (q = 0; q < 3; q++)
        {
            for (w = 0; w < 3; w++)
            {
                cout << "A [" << q << "] [" << w << "]= ";
                cin >> A[q][w];
            }
        }
        cout << endl;

        cout << "Matriks B : " << endl;
        for (q = 0; q < 3; q++)
        {
            for (w = 0; w < 3; w++)
            {
                cout << "B [" << q << "] [" << w << "]= ";
                cin >> B[q][w];
            }
        }
        cout << endl;

        for (q = 0; q < 3; q++)
        {
            for (w = 0; w < 3; w++)
            {
                C[q][w] = A[q][w] * B[q][w];
            }
        }

        cout << "Hasil Perkalian Matriks" << endl;

        for (q = 0; q < 3; q++)
        {
            for (w = 0; w < 3; w++)
            {
                cout << "C [" << q << "]  [" << w << "]= " << C[q][w] << endl;
            }
        }

        cout << endl;

        break;
        
    default:
    {
        cout << "LOL" << endl;
    }
    }

    return 0;
}
