#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int angka;
int pilihan;

void tampilkanmenu(){
    cout<<"===MENU PENGECEKKAN ANGKA===";
    cout<<"1. mengecek bilangan prima";
    cout<<"2. mengecek bilangan Fibonacci";
    cout<<"3. keluar dari menu";
    cout<<"pilihan menu";
}

void inputData() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angka;
}

bool apakahPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}
 bool apakahFibonacci(int n) {
    int a = 0, b = 1;
    if (n == a || n == b) return true;
    
    int c = a + b;
    while (c <= n) {
        if (c == n) return true;
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}  
int main() {
    while (true) {
        tampilkanMenu();

        if (pilihan == 0) {
            cout<<"Keluar dari program. Terima kasih!" << endl;
            break; 
        }

        switch (pilihan) {
            case 1:
                inputAngka();
                if (apakahPrima(angka)) 
                    cout << angka << " adalah Bilangan Prima." << endl;
               
        }
    }
}
