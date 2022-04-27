#include "../base.h"
using namespace std;

void Nilai::proses() {
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
