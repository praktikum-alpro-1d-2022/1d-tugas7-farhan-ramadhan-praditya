//NPM-2210631170120
//Kelas-1D
//Farhan Ramadhan Praditya

#include <iostream>
using namespace std;

void garis()
{
    cout << "------------------" << endl;
}

int main()
{
    int h, j, k, l, matriks[10][10], transpose[10][10];
    
    cout << "Transpose Matriks" << endl;
    garis();
    cout << "Masukkan Jumlah Baris Matriks  : ";
    cin >> k;
    cout << "Masukkan Jumlah Kolom Matriks  : ";
    cin >> l;
    garis();
    cout << "Masukkan Elemen Matriks" << endl;
    for (h = 0; h < k; h++)
    {
        for (j = 0; j < l; j++)
        {
            cin >> matriks[h][j];
        }
    }
    for (h = 0; h < k; h++)
    {
        for (j = 0; j < l; j++)
        {
            transpose[j][h] = matriks[h][j];
        }
    }
    garis();
    cout << "Hasil Transpose Matriks    : " << endl;
    for (h = 0; h < l; h++)
    {
        for (j = 0; j < k; j++)
        {
            cout << transpose[h][j] << "\t";
        }
        cout << endl;
    }
}
