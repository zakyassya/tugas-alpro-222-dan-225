#include <iostream>
#include <string>

using namespace std;

// Struktur data pasien
struct Pasien {
    string nama;
    int umur;
    char jenis_kelamin;
    string no_telepon;
    string alamat;
    string riwayat_penyakit;
    int no_rekam_medis;
};

// Fungsi rekursif untuk menampilkan data pasien
void tampilkanDataPasien(Pasien daftar_pasien[], int index, int jumlah_pasien) {
    if (index >= jumlah_pasien) {
        return; 
    }

    cout << "Data Pasien ke-" << index + 1 << endl;
    cout << "Nama: " << daftar_pasien[index].nama << endl;
    cout << "Umur: " << daftar_pasien[index].umur << endl;
    cout << "Jenis Kelamin: " << daftar_pasien[index].jenis_kelamin << endl;
    cout << "Nomor Telepon: " << daftar_pasien[index].no_telepon << endl;
    cout << "Alamat: " << daftar_pasien[index].alamat << endl;
    cout << "Riwayat Penyakit: " << daftar_pasien[index].riwayat_penyakit << endl;
    cout << "Nomor Rekam Medis: " << daftar_pasien[index].no_rekam_medis << endl;
    cout << endl;

    tampilkanDataPasien(daftar_pasien, index + 1, jumlah_pasien); // Panggilan rekursif
}

// Fungsi pencarian data pasien berdasarkan nama
int cariPasien(Pasien daftar_pasien[], int jumlah_pasien, string nama_cari) {
    for (int i = 0; i < jumlah_pasien; i++) {
        if (daftar_pasien[i].nama == nama_cari) {
            return i; // Mengembalikan indeks pasien jika ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika pasien tidak ditemukan
}

int main() {
    const int max_pasien = 100; // Maksimum jumlah pasien
    Pasien daftar_pasien[max_pasien];
    int jumlah_pasien = 0;

    int pilihan;
    do {
        cout << "Menu:" << endl;
        cout << "1. Tambah Data Pasien" << endl;
        cout << "2. Cari Data Pasien" << endl;
        cout << "3. Tampilkan Semua Data Pasien" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore(); // Membersihkan newline dari input sebelumnya

        if (pilihan == 1) {
            // Menambahkan data pasien
            cout << "Masukkan data pasien:" << endl;
            cout << "Nama: ";
            getline(cin, daftar_pasien[jumlah_pasien].nama);
            cout << "Umur: ";
            cin >> daftar_pasien[jumlah_pasien].umur;
            cin.ignore();
            cout << "Jenis Kelamin: ";
            cin >> daftar_pasien[jumlah_pasien].jenis_kelamin;
            cin.ignore();
            cout << "Nomor Telepon: ";
            getline(cin, daftar_pasien[jumlah_pasien].no_telepon);
            cout << "Alamat: ";
            getline(cin, daftar_pasien[jumlah_pasien].alamat);
            cout << "Riwayat Penyakit: ";
            getline(cin, daftar_pasien[jumlah_pasien].riwayat_penyakit);
            cout << "Nomor Rekam Medis: ";
            cin >> daftar_pasien[jumlah_pasien].no_rekam_medis;
            cin.ignore();

            jumlah_pasien++;
            cout << "Data pasien berhasil ditambahkan." << endl;
        } else if (pilihan == 2) {
            // Mencari data pasien
            string nama_cari;
            cout << "Masukkan nama pasien yang ingin dicari: ";
            getline(cin, nama_cari);

            int index_pasien = cariPasien(daftar_pasien, jumlah_pasien, nama_cari);

            if (index_pasien != -1) {
                cout << "Pasien ditemukan pada indeks ke-" << index_pasien << endl;
                cout << "Data Pasien:" << endl;
                cout << "Nama: " << daftar_pasien[index_pasien].nama << endl;
                cout << "Umur: " << daftar_pasien[index_pasien].umur << endl;
                cout << "Jenis Kelamin: " << daftar_pasien[index_pasien].jenis_kelamin << endl;
                cout << "Nomor Telepon: " << daftar_pasien[index_pasien].no_telepon << endl;
                cout << "Alamat: " << daftar_pasien[index_pasien].alamat << endl;
                cout << "Riwayat Penyakit: " << daftar_pasien[index_pasien].riwayat_penyakit << endl;
                cout << "Nomor Rekam Medis: " << daftar_pasien[index_pasien].no_rekam_medis << endl;
            } else {
                cout << "Pasien dengan nama " << nama_cari << " tidak ditemukan." << endl;
            }
        } else if (pilihan == 3) {
            // Menampilkan semua data pasien
            cout << "Data Pasien:" << endl;
            tampilkanDataPasien(daftar_pasien, 0, jumlah_pasien);
        } else if (pilihan == 0) {
            cout << "Program selesai." << endl;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 0);

    return 0;
}
