#include <iostream>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
};

int main(){
    mahasiswa mhs;

    mhs.nim = "20220140102";
    mhs.nama = "Abra Yudhistira";
    mhs.alamat = "Kasihan";

    cout << "Masukkan NIM = ";
    cin >> mhs.nim;
    cout << "Masukkan NAMA = ";
    cin >> mhs.nama;
    cout << "Masukkan ALAMAT DESA = ";
    cin >> mhs.alamat.desa;
    cout << "Masukkan ALAMAT KOTA = ";
    cin >> mhs.alamat.kota;

    //menampilkan data struct
    cout << endl;
    cout << "NIM = " << mhs.nim << endl;
    cout << "Nama = " << mhs.nama << endl;
    cout << "Desa = " << mhs.alamat.desa << endl;
    cout << "Kota = " << mhs.alamat.kota << endl;

}