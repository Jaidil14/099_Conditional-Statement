#include <iostream>
using namespace std;

int main(){
    int nRerata, nNilMtk, nNilFisika;
    string cstatus;

    cout << "Nilai Matematika = ";
    cin >> nNilMtk;
    cout << "Nilai Fisika = ";
    cin >> nNilFisika;
    nRerata = (nNilMtk + nNilFisika) / 2;
    cout << "Rerata = " << nRerata << endl;

    if (nRerata >= 60){
        cstatus = "Lulus";
    }
    else if (nNilMtk >= 70){
        cstatus = "Lulus";
    }
    else {
        cstatus = "Tidak Lulus";
    }

    cout << "Status = " << cstatus << endl;
    return 0;

}