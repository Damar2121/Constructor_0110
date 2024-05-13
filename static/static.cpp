#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
	static int nim;
	int id;
	string nama;

	void setId();
	void printAll();
	mahasiswa(string pnama)
	{
		nama = pnama;
		setId();
	}
};