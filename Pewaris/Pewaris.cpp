
#include <iostream>
#include<string>
using namespace std;
//memberinitlist

class Mahasiswa
{
private:
	const int id;
	string nama;
	float nilai;

public:
	Mahasiswa(int pId, string pNama, float pNilai) : id(pId), nama(pNama), nilai(pNilai)
	{
		//membuat definisi
	}

	~Mahasiswa()
	{
		cout << "Id = " << id << endl;
		cout << "Nama = " << nama << endl;
		cout << "Nilai = " << nilai << endl;
	}
};

int main()
{

}

