#include <iostream>
using namespace std;

class PersegiPanjang{
    public: //akses modifier
        int panjang, lebar;

    public:
    void input()
    {
            cout << "Masukkan panjang : ";
            cin >> panjang;
            cout << "Masukan lebar : ";
            cin >> lebar;
    } 

    int luasPp(int a, int b){
        return a * b;
    }
};

class Lingkaran {
    public:
    int jarijari;

    void input (){
        cout << "masukkan Jari Jari : ";
        cin >> jarijari;
    }
    int luasLingkaran(int r){
        return 3.14 * r * r;
    }
};
int main()
{
    PersegiPanjang objekPP; // membuat objek
    Lingkaran ol;

    cout << "Masukkan Panjang : ";
    cin >> objekPP.panjang;
    cout << "Masukkan lebar :";
    cin >> objekPP.lebar;
    cout << "Luas persegi panjang : " <<
     objekPP.luasPp(objekPP.panjang, objekPP.lebar)<<endl;
    
   
}
