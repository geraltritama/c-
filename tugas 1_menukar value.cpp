#include <iostream>
using namespace std;

int main()
	{
		//menggunakan variabel ketiga untuk menampung variabel yang lain
		int value1 = 10;
		int value2 = 8;
		int value3;
		
		cout<<"Value sebelum di tukar (dengan value tambahan)"<<endl;
		cout<<"value 1: "<<value1<<endl;
		cout<<"value 2: "<<value2<<"\n"<<endl;
		
		cout<<"value setelah di tukar"<<endl;
		value3 = value1; //memasukan value 1 ke dalam value 3
		value1 = value2; //memasukan value 2 kedalam value 1
		value2 = value3; //memasikan value 3 kedalam value 2
		
		cout <<"value 1: "<<value1<<endl;
		cout <<"value 2: "<<value2<<endl;
		
		cout<<endl;
		
		//tanpa menggunakan variabel lain
		
		value1 = 10;
		value2 = 8;
		
		cout<<"value sebelum di tukar (tanpa value tambahan)"<<endl;
		cout<<"value 1: "<< value1 <<endl;
		cout<<"value 2: "<< value2 <<endl;
		
		value1=value1+value2; //disini kan value1(10)+value2(8)  =value1=18
		value2=value1-value2; // disini value1(18)-value2(8)     =value2=10
		value1=value1-value2; //value1=value1(18)-value2(8)      =value1=8
		
		cout<<endl;
		
		cout<<"value setelah di tukar"<<endl;
		cout<<"value 1: "<<value1<<endl;
		cout<<"value 2: "<<value2;
		
		
		return 0;
	}
		
	
