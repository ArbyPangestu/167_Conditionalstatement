#include <iostream>
using namespace std;

double luas,alas, tinggi;

void procedureInput(){
    cout << "Masukan Nilai alas : ";
    cin >> alas;

    cout << "Masukan Nilai tinggi : ";
    cin >> tinggi;
}

double hitungluas(){
    return 0.5 * alas * tinggi;
}

double hitungluas2(double a, double t){
    return 0.5 * a * t;

}
void procedureOutput(){
    cout << "luas segitigas =" << hitungluas() << endl;
}


void procedureOutput2(){
    cout << "luas segitigas =" << hitungluas2(alas, tinggi) << endl;
}



int main(){
    procedureInput();
    procedureOutput();
    procedureOutput2();
}