#include <iostream>
using namespace std;

int atimtis(inr x,int y){return x-y;}
int daugyba(int x, int y){return x*y;}
double dalyba(int x,int y){return x/y;}
{
	int x=10; int y=5;

	cout << "Sveika aritmetika!"<<endl;

	cout <<x<< " - "<<y<<" = "<<atimtis(x,y)<<endl;
	cout <<x<< " * "<<y<<" = "<<daugyba(x,y)<<endl;
	cout <<x<< " / "<<y<<" = "<<dalyba(x,y)<<endl;

	return 0;
}
