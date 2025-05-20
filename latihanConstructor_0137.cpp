#include <iostream>
using namespace std;

class Barang {
    private :
    string namaBarang;
    int kodeBarang;
    
public :
    Barang(string nama,int kode );
    

    
    void cetak ();

};

Barang::Barang(string nama, int kode){
    namaBarang = nama;
    kodeBarang = kode;
}

void Barang::cetak(){
    cout<<"namaBarang : "<<namaBarang <<endl;
    cout<<"kodeBarang : "<<kodeBarang <<endl;
}

int main(){
    Barang brg("Lemari", 89);
    brg.cetak();
    return 0;
}