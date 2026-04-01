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
    
   
}   