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

void Ibu::tambahAnak(anak*pAnak)
{
	daftar_anak.push_bsck(pAnak);
}

void Ibu::cetakAnak()
{
	cout << "Daftar Anak dari Ibu\"" << this->nama << "\":\n";
	for (auto& a : daftar_anak)
	{
		cout << a->nama << "\n";
		
	}
	cout << endl;
}
#endif
