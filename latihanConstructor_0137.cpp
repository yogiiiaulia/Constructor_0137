#include <iostream>
using namespace std;

class Barang {
    public :
    Barang (string namaBarang, int kodeBarang);

};

Barang::Barang(string namaBarang, int kodeBarang){
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "kode Barang : " << kodeBarang << endl;
}

int main(){
    Barang brg("Lemari", 49);
    return 0;
}