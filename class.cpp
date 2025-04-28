#include <iostream>
using namespace std;

class Mobil{
    public:
        string nama_mobil;
        string tipe_mobil;
    private:
        int harga_mobil;
    public:
        void input_data(){
            cout << "Masukkan nama mobil: ";
                cin >> nama_mobil;
            cout << "Masukkan tipe mobil: ";
                cin >> tipe_mobil;
            cout << "Masukkan harga mobil: ";
                cin >> harga_mobil;
        }
        void output_data(){
            cout << "Harga mobil = " << harga_mobil << endl;
    }
};

int main(){
    Mobil sf90;
    sf90.input_data();
    cout << "Nama mobil = " << sf90.nama_mobil << endl;
    cout << "Tipe mobil = " << sf90.tipe_mobil << endl;
    sf90.output_data();
};






