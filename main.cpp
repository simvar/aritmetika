#include <iostream>
using namespace std;
int sudetis(int x,int y){
return x+y;
}
int main (int argc, char const *argv[])
{
int x=10; int y =5;
	cout << "Sveika aritmetika!"<<endl;
	cout << x<<" + "<<y<<" = "<<sudetis(x,y)<<endl;
	return 0;
}
