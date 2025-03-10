#include <iostream>
using namespace std; 

double alas, tinggi;

void procedurInput(){
    cout << "Masukan Nilai alas : ";
    cin >> alas;

    cout << "Masukan Nilai Tinggi ; ";
    cin >> tinggi;
}

double HitungLuas(){
     return 0,5 * alas * tinggi;
}

void procedurOutput(){
    cout << "luas segitiga = " << HitungLuas() << endl;

}

int main(){
    procedurInput();
    procedurOutput();

}