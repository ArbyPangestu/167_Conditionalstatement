#include <iostream>
#include <string>

using namespace std;

int arr[20];    //Deklarasi variable global array dengan panjang 20 dan nama arr
int n;  //Deklarasi variable global n untuk menyimpan elemen pada array

void input(){   //Proseur input
    int d;
    while (true){
        cout << "masukkan banyaknya elemen pada array";
        cin >> n;
        if  (n <=20){
            break;
        }
        else {
            cout << "\nArray maksimal 20 elemen. \n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i=0;i<n; i++){
        cout << "Data ke-" << (i+1) << " = ";
        cin >> arr[i];
    }
}

void bubbleSortArray()
{
    int pass = 1;   // step 1

    do {
        for (int j=0; j<=n-1-pass; j++){   // step 2
            if (arr[j] > arr[j+1]) {        // step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
        pass = pass + 1; // step 4
    }while(pass <= n-1); // step 5
}