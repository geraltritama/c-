#include <iostream>
using namespace std;

int main()
	{
		int jumlahbebek=20;
		int jumlahteman=13;
		int hasilbagi;
		int sisa;
		
		cout<<"Bebek Pak Tatang: "<<jumlahbebek<<endl;
		cout<<"Jumlah teman: "<<jumlahteman<<endl;
		
		cout<<endl;
		
		hasilbagi = jumlahbebek/jumlahteman; //bebek yang di berikan per orang
		sisa = jumlahbebek%jumlahteman; //sisa dari bebek yang sudah di bagi
		
		cout<<"jumlah bebek yang di berikan per orang: "<<hasilbagi<<endl;
		cout<<"sisa bebek pak tatang: "<<sisa<<endl;
		
		return 0;
	}
