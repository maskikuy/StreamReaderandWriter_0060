#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		//throw 0.5; //melemparkan sebuah integer maka
		cout << "pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan di eksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		cout << "Default Pengecualian dieksekusi" << endl;

	}
	return 0;
}