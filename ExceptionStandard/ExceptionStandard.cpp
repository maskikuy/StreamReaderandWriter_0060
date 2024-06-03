#include <iostream>
#include <exception>
// untuk obyek exception yang akan digunakan
#include <array>
//untuk obyek array yang akan di gunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 1, 2, 3 };
		//pesan array integer 3 elemen
		cout << data.at(5) << endl;
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
	cout << "Baris program yang terakhir" << endl;
	return 0;
}
