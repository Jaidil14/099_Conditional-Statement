#include <iostream>
using namespace std;

int main(){
    int nBilangan;
    string status;
    srand(time(0));

    nBilangan = rand() % 10;
    cout << "Bilangannya Adalah = " << nBilangan << endl;

    if (nBilangan % 2 == 0){
        status = "Genap";
    }
    else{
        status = "Ganjil";
    }

    cout << "Statusnya adalah = " << status << endl;
    return 0;

}