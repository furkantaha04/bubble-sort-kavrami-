// BUBBLE SORT.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
int main()
{

	int dizi[] = { 7,15,35,65,75,72,89,92,23,46 }; //DİZİ ELEMANLARI

	int tutucu;                                            //BUBLE SORT
	for (int k = 0; k < 10; k++)
	{
		for (int i = 0; i < 9; i++)    //DÖNGÜ
		{
			if (dizi[i] > dizi[i + 1])
			{
				tutucu = dizi[i];
				dizi[i] = dizi[i + 1];     //  İKİ DİZİYİ KARŞILAŞTIRMAK İÇİN GEREKEN KOMUT
				dizi[i + 1] = tutucu;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << dizi[i] << endl;   // SAYILARI SIRALI BİÇİMDE  EKRANA YAZAR
	}
}



