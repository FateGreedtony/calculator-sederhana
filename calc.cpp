#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    cout << "=== Selamat Datang di Kalkulator Sederhana! ===\n \n";
    char pilih;

    do{
        float a, b;
        double hasil;
        char aritmatika;
        
        //inputan
        cout << "nilai pertama: ";
        cin >> a;
        cout << "nilai kedua: ";
        cin >> b;
        cout << "pilih operasi: ";
        cin >> aritmatika;

        //looping
        cout << "Ingin menggunakannya lagi?" << endl;
        cin >> pilih;
    } while (pilih == 'y' || pilih == 'Y');

    system("pause");    
    return 0;
}