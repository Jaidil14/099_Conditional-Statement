#include <iostream>
using namespace std;

int main(){
    int nBilangan;
    srand(time(0));
    
    nBilangan = rand() % 10;
    cout << "Nilai Awal = " << nBilangan << endl;

    if (nBilangan % 2 == 0){
        nBilangan = nBilangan + 1;
    }

    cout << "Nilai Akhir = " << nBilangan << endl;
    return 0;
    
}