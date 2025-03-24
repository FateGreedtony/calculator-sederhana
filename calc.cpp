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

        //proses
        switch(aritmatika){
            case '*':
                hasil = a * b;
                cout << "hasil dari " << a << " dikali " << b << " adalah " << hasil << endl;
                break;
            case '/':
                hasil = a / b;
                cout << "hasil dari " << a << " dibagi " << b << " adalah " << hasil << endl;
                break;
            case '+':
                hasil = a + b;
                cout << "hasil dari " << a << " ditambah " << b << " adalah " << hasil << endl;
                break;
            case '-':
                hasil = a - b;
                cout << "hasil dari " << a << " dikurang " << b << " adalah " << hasil << endl;
                break;
            default:
                cout << "inputanmu ada yang salah!" << endl;
        }

        
        //looping
        cout << "Ingin menggunakannya lagi?" << endl;
        cin >> pilih;
    } while (pilih == 'y' || pilih == 'Y');

    system("pause");    
    return 0;
}