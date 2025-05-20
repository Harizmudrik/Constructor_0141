//buatlah program c++ dengan class Barang yang memiliki atribut: namaBarang,
//kodeBarang
//program memiliki constructor berparameter untuk mengisi
//nilai namaBarang dan kodeBarang.
//serta memiliki fungsi untuk menampilkan informasi barang.



#include <iostream>
#include <string>
using namespace std;

class Barang {
private:
    int kodeBarang;
    string namaBarang;

public:

    Barang(int kode, string nama) {
        kodeBarang = kode;
        namaBarang = nama;
    }

    void tampilkan() {
        cout << "Kode Barang : " << kodeBarang << endl;
        cout << "Nama Barang : " << namaBarang << endl;
    }
};

int main() {

    Barang brg(404, "Gear 5");
    brg.tampilkan();
    return 0;
}
