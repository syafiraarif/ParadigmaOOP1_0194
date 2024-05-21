#ifndef IBU_H
#define IBU_H

class Ibu
{
public:
	string nama;
	vector<anak*> daftar_anak;

	Ibu(string pNama): nama(pNama)
	{
		cout << "Ibu \"" << nama << "\" ada\n";
	}

	~Ibu()
	{
		cout << "Ibu\"" << nama << "\" tidak ada\n";
	}

	void tambahAnak(anak*);
	void cetakAnak();
};
#endif
