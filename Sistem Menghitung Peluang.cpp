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
double peluangBersyarat(int seluruhKejadian, int kejadian2)
{
    return static_cast<double>(seluruhKejadian) / kejadian2 * 100;
}
int main (){
  int pilihan;
  cout << "Sistem Penghitung Persentase Peluang" << endl;
  cout << "1. Persentase Peluang Sederhana" << endl;
  cout << "2. Persentase Peluang Gabungan" << endl;
  cout << "3. Persentase Peluang Bersyarat" << endl;
  cout << "Pilih jenis peluang (1/2/3): ";
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

    case 3:
        int seluruhKejadian, kejadian2;
        cout << "Masukkan jumlah kejadian A dan B: ";
        cin >> seluruhKejadian;
        cout << "Masukkan jumlah kejadian B: ";
        cin >> kejadian2;
        cout << "Persentase peluang bersyarat: " << fixed << setprecision(2) << peluangBersyarat(seluruhKejadian, kejadian2) << "%\n";
        break;
    
    default:
      cout << "Pilihan tidak valid!" << endl;
      break;
  }
  
return 0;
}
