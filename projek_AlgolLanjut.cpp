#include <iostream>
using namespace std;

struct pasien {
    string nama;
    int umur;
    string jenis_kelamin;
    string no_telp;
    string alamat;
    string riwayat_penyakit;
    int no_rek_medis;
};

int main() {
    int jumlah_pasien;
    cout << "Masukkan jumlah pasien: ";
    cin >> jumlah_pasien;
    cin.ignore(); 

    pasien daftar_pasien[jumlah_pasien];
    for (int i = 0; i < jumlah_pasien; i++) {
        cout << "\n=== Input Data Pasien " << i + 1 << " ===" << endl;

        cout << "Nama: ";
        getline(cin, daftar_pasien[i].nama);

        cout << "Umur: ";
        cin >> daftar_pasien[i].umur;
        cin.ignore(); 

        cout << "Jenis Kelamin: ";
        getline(cin, daftar_pasien[i].jenis_kelamin);

        cout << "Nomor Telepon: ";
        getline(cin, daftar_pasien[i].no_telp);

        cout << "Alamat: ";
        getline(cin, daftar_pasien[i].alamat);

        cout << "Riwayat Penyakit: ";
        getline(cin, daftar_pasien[i].riwayat_penyakit);

        cout << "Nomor Rekam Medis: ";
        cin >> daftar_pasien[i].no_rek_medis;
        cin.ignore();
    }

    cout << "\n=== Data Pasien yang Telah Dimasukkan ===\n";
    for (int i = 0; i < jumlah_pasien; i++) {
        cout << "\n=== Data Pasien " << i + 1 << " ===" << endl;
        cout << "Nama            : " << daftar_pasien[i].nama << endl;
        cout << "Umur            : " << daftar_pasien[i].umur << " tahun" << endl;
        cout << "Jenis Kelamin   : " << daftar_pasien[i].jenis_kelamin << endl;
        cout << "Nomor Telepon   : " << daftar_pasien[i].no_telp << endl;
        cout << "Alamat          : " << daftar_pasien[i].alamat << endl;
        cout << "Riwayat Penyakit: " << daftar_pasien[i].riwayat_penyakit << endl;
        cout << "Nomor Rekam Medis: " << daftar_pasien[i].no_rek_medis << endl;
    }

    return 0;
}
