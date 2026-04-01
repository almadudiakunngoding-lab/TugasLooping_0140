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
   