#include "../base.h"

void Nilai::input() {
  cout << "Nama Mahasiswa : ";
  cin >> nama[30];
  cout << "Banyak mata kuliah yang diambil : ";
  cin >> byk_matkul;
  for (int i = 0; i < byk_matkul; i++) {
    cout << "======================================" << endl;
    cout << "Mata Kuliah : " << i + 1;
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

void Nilai::output() {
  cout << "Nama Mahasiswa  : " << nama << endl;
  cout << "Banyak mata kuliah yang diambil : \n" << byk_matkul;
  cout << "\n============================================== ============" << endl;
  cout << "  Mata Kuliah \t||\t Tugas\t||\tUTS\t||\tUAS\t||\tNilai Akhir  ||"
       << endl;
  cout << "\n============================================== ============" << endl;
  for (int i = 0; i < byk_matkul; i++) {
    cout << "  " << matkul[i] << "   \t\t||  \t" << tugas[i] << "\t||  \t" << uts[i] << "\t||  \t"
         << uas[i] << "\t||  \t" << nilai_akhir[i] << endl;
  }
  cout << "============================================== ============" << endl;
  cout <<"Rata-rata     ||"<< rata_tugas << " \t|| \t"<< rata_uts << "  \t||  \t"<< rata_uas << " \t|| \t"<< rata_akhir<< " \t|| \t" << endl;
}
