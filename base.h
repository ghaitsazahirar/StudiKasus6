#include <iostream>
using namespace std;

class Nilai {
public:
  void input();
  void proses();
  void output();

private:
  string nama, matkul[20];
  int i, byk_matkul, tugas[20], uts[20], uas[20], jml_tugas=0,jml_uts=0,jml_uas=0,jml_akhir=0;
float rata_tugas, rata_uts,
      rata_uas, rata_akhir,nilai_akhir[20];
};

void Nilai::input() {
  cout << "Nama Mahasiswa : ";
  cin >> nama;
  cout << "Banyak mata kuliah yang diambil : ";
  cin >> byk_matkul;
  for (int i = 0; i < byk_matkul; i++) {
    cout << "======================================" << endl;
    cout << "Mata Kuliah ke-" << i + 1 << " : ";
    cin >> matkul[i];
    cout << "Tugas  : ";
    cin >> tugas[i];
    cout << "UTS  : ";
    cin >> uts[i];
    cout << "UAS  : ";
    cin >> uas[i];
    cout << "======================================" << endl;
  }
}

void Nilai::proses() {
  // nilai_akhir = 0;
  for (int i = 0; i < byk_matkul; i++) {
    nilai_akhir[i] = ((0.2 * tugas[i]) + (0.35 * uts[i]) + (0.45 * uas[i]));
  }
  for (int i = 0; i < byk_matkul; i++) {
    jml_tugas=jml_tugas+tugas[i];
    jml_uts=jml_uts+uts[i];
    jml_uas=jml_uas+uas[i];
    jml_akhir=jml_akhir+nilai_akhir[i];
  }
  rata_tugas = jml_tugas / byk_matkul;
  rata_uts = jml_uts / byk_matkul;
  rata_uas = jml_uas / byk_matkul;
  rata_akhir = jml_akhir / byk_matkul;
}

void Nilai::output() {
  cout << "Nama Mahasiswa  : " << nama << endl;
  cout << "Banyak mata kuliah yang diambil : " << byk_matkul<<endl;
  cout << "============================================== ============" << endl;
  cout << "  Mata Kuliah \t||\t Tugas\t||\tUTS\t||\tUAS\t||\tNilai Akhir  ||"
       << endl;
  cout << "============================================== ============" << endl;
  for (int i = 0; i < byk_matkul; i++) {
    cout << "  " << matkul[i] << "  \t\t||\t " << tugas[i] << "\t ||\t " << uts[i] << " \t||\t "
         << uas[i] << " \t||\t " << nilai_akhir[i] << endl;
  }
  cout << "============================================== ============" << endl;
  cout <<"Rata-rata  \t||"<< rata_tugas << " \t||\t "<< rata_uts << " \t||\t "<< rata_uas << " \t||\t "<< rata_akhir<< " \t||\t " << endl;
}
