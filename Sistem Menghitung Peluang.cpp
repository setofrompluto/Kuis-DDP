#include <iostream> 
#include <iomanip>
using namespace std;

double hitungPeluangSederhana(int kejadian, int percobaan){
  return static_cast<double>(kejadian) / percobaan * 100;
}

int main (){
  int pilihan;
  cout << "Sistem Penghitung Persentase Peluang" << endl;
  cout << "1. Persentase Peluang Sederhana" << endl;
  cout << "Pilih jenis peluang (1/): ";
  cin >> pilihan;

  switch (pilihan){
    case 1:
      int kejadian, percobaan;
      cout << "Masukkan total kejadian berhasil: ";
      cin >> kejadian;
      cout << "Masukkan total percobaan: ";
      cin >> percobaan;
      cout << "Persentas peluang: " << fixed << setprecision(2) << hitungPeluangSederhana(kejadian, percobaan) << "%" << endl; 
      break;  
    default:
      cout << "Pilihan tidak valid!" << endl;
      break;
  }
  
return 0;
}
