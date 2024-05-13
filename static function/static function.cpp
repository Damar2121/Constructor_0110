#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
	static long int nim;
public:
	long int id;
	string nama;

	void setId();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama)
	{
		nama = pnama;
		setId();
	}
};

long int mahasiswa::nim = 20230140110;

void mahasiswa::setId()
{
	id = ++nim;
}

void mahasiswa::printAll()
{
	cout << "ID   = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("Damar Sadewa");
	mahasiswa mhs2("Soekarno");
	mahasiswa::setNim(9); // mengakses nim melalui static member function "setNim" 
	mahasiswa mhs3("Bung Hatta");
	mahasiswa mhs4("Bill Gates");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;
}