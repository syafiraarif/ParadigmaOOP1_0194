

#include <iostream>
#include<vector>
using namespace std;

#include "Anak.h"
#include "Ibu.h"

int main()
{
    Ibu* varIbu = new Ibu("dini");
    Ibu* varIbu2 = new Ibu("novi");
    Anak* varAnak1 = new Anak("tono");
    Anak* varAnak2 = new Anak("rini");
    Anak* varAnak3 = new Anak("dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

    return 0;

}



