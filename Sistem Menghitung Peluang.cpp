#include <iostream> 
#include <iomanip>
using namespace std;

double hitungPeluangSederhana(int kejadian, int percobaan){
  return static_cast<double>(kejadian) / percobaan * 100;
}
double peluangGabungan(int kejadianA, int kejadianB, int kejadianKeduanya, int totalPercobaan)
{
    double peluangA = static_cast<double>(kejadianA) / totalPercobaan;
    double peluangB = static_cast<double>(kejadianB	) / totalPercobaan;
    double peluangKeduanya = static_cast<double>(kejadianKeduanya) / totalPercobaan;
    return (peluangA + peluangB - peluangKeduanya) * 100;
}
double peluangBersyarat(int kejadianKeduanya, int kejadianB)
{
    return static_cast<double>(kejadianKeduanya) / kejadianB * 100;
}
int main (){
  int pilihan;
  cout << "Sistem Penghitung Persentase Peluang" << endl;
  cout << "1. Persentase Peluang Sederhana" << endl;
  cout << "2. Persentase Peluang Gabungan" << endl;
  cout << "Pilih jenis peluang (1/2a): ";
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

    case 2:
        int kejadianA, kejadianB, kejadianKeduanya, totalPercobaan;
        cout << "Masukkan jumlah kejadian A: ";
        cin >> kejadianA;
        cout << "Masukkan jumlah kejadian B: ";
        cin >> kejadianB;
        cout << "Masukkan jumlah kejadian yang terjadi secara bersamaan : ";
        cin >> kejadianKeduanya;
        cout << "Masukkan total percobaan: ";
        cin >> totalPercobaan;
        cout << "Persentase peluang gabungan: " << fixed << setprecision(2) << peluangGabungan (kejadianA, kejadianB, kejadianKeduanya, totalPercobaan) << "%\n";
        break;
    
    default:
      cout << "Pilihan tidak valid!" << endl;
      break;
  }
  
return 0;
}
