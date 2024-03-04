#include <iostream>
using namespace std;

int main(){
    int nBilA, nBilB;
    string status;
    srand(time(0));

    nBilA = rand() % 10;
    nBilB = rand() % 10;

    cout << "Bilangan A = " << nBilA << endl;
    cout << "Bilangan B = " << nBilB << endl;

    if (nBilA == nBilB){
        status = "Bilangan A dan B sama Besar";
    }
    else if (nBilA > nBilB){
        status = "Bilangan A lebih besar";
    }
    else{
        status = "Bilangan B lebih besar";
    }

    cout << "Statusnya adalah = " << status << endl;
    return 0;
    
}