#include <iostream>
using namespace std;

// deklarasi class
class Contoh {
  private:
    int angka;

  public:
    // constructor
    Contoh(int a) {
        angka = a;
    }

    // fungsi untuk mengembalikan nilai angka
    int getAngka() {
        return angka;
    }
};

int main() {
  // membuat objek dari class Contoh
  Contoh obj(5);

  // memanggil fungsi getAngka pada objek
  cout << "Nilai angka pada objek: " << obj.getAngka() << endl;

  return 0;
}

//Penjelasan:

Pertama, kita memasukkan header file iostream untuk menggunakan fungsi input/output standar pada C++.
Kemudian, kita mendefinisikan sebuah class bernama Contoh. Pada class tersebut, kita memiliki satu variabel angka yang bersifat private dan satu constructor yang menerima satu parameter bertipe integer. Constructor tersebut akan menginisialisasi variabel angka dengan nilai yang diberikan.
Selanjutnya, kita mendefinisikan sebuah fungsi bernama getAngka() yang akan mengembalikan nilai variabel angka pada objek.
Di dalam fungsi main(), kita membuat sebuah objek obj dari class Contoh dengan nilai 5 sebagai parameter pada constructor.
Kemudian, kita memanggil fungsi getAngka() pada objek obj dan menampilkannya pada layar menggunakan cout.
