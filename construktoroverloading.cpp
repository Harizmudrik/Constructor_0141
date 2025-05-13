#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
    int nim;
    string nama;
    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa::mahasiswa(){
}

mahasiswa::mahasiswa(int iNim){
    nim = iNim; //definisi hanya nim
}

mahasiswa::mahasiswa(int iNama){
    nim = iNama; //definisi hanya nama
}

int main (){

}