#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    public:
    //construktor dengan parameter
    mahasiswa(int nim, string nama);
};

//Definisi construktor dengan parameter
mahasiswa::mahasiswa(int nim, string nama){
    cout << "Construktor Dengan Parameter Terpanggil" << endl;
    
}

int main ()
{

}