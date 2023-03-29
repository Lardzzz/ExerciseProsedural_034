#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double r, double m) {
	if (r >= 70 or m > 80) {
		return "diterima";
	}
	else {
		return "ditolak";
	}
}

string Nama[20];
int NilMath[20], NilEng[20];
float rerataNilai[20];

void inputanNama() {
	for (int i = 0; i < 20; i++) {
		cout << "Masukkan Nama Peserta Tes : ";
		cin >> Nama[i];
		cout << "Masukkan Nilai Matematika : ";
		cin >> NilMath[i];
		cout << "Masukkan Nilai Bahasa Inggris : ";
		cin >> NilEng[i];

		rerataNilai[i] = rerata(NilMath[i], NilEng[i]);
	}
}

void tampilkandata() {
	cout << "Nama\t\tStatus" << endl;
	for (int i = 0; i < 20; i++) {
		cout << Nama[i] << "\t\t" << status(rerataNilai[i], NilMath[i]) << endl;
	}
}

void jumlahditerima() {
	int JumlahDiterima = 0;
	int JumlahDitolak = 0;
	for (int i = 0; i < 20; i++) {
		if (status(rerataNilai[i], NilMath[i]) == "diterima") {
			JumlahDiterima++;
		}
		else {
			JumlahDitolak++;
		}
	}
	cout << "Jumlah Peserta Yang Diterima : " << JumlahDiterima << endl;
	cout << "Jumlah Peserta Yang Tidak Diterima : " << JumlahDitolak << endl;
}

int main() {
	inputanNama();
	tampilkandata();
	jumlahditerima();
	return 0;
}