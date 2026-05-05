#include <string>
#include <iostream>
using namespace std;

class Produk {
private:
    int id;
    string nama;

public:
    void tampilkan() {
        cout << "ID: " << id << endl;
        cout << "Nama: " << nama << endl;
        cout << endl;
    }

    // Constructor tanpa parameter (default)
    Produk() {
        id = 14;
        nama = "Baju";
    }

    // Constructor dengan parameter id
    Produk(int Pid) {
        id = Pid;
        nama = "Meja";
    }

    // Constructor dengan parameter nama
    Produk(string Pnama) {
        id = 1;
        nama = Pnama;
    }

    // Constructor dengan parameter lengkap
    Produk(int Pid, string Pnama) {
        id = Pid;
        nama = Pnama;
    }
};

int main() {
    cout << "--- Daftar Inventaris Toko ---" << endl;
    
    Produk Produk1;
    Produk Produk2(3);
    Produk Produk3("Meja");
    Produk Produk4(4, "Kursi");

    Produk1.tampilkan();
    Produk2.tampilkan();
    Produk3.tampilkan();
    Produk4.tampilkan();

    return 0;
}