#include <iostream>
using namespace std;
<<<<<<< HEAD

int atimtis(inr x,int y){return x-y;}
int daugyba(int x, int y){return x*y;}
double dalyba(int x,int y){return x/y;}
int modd(int x,int y){return x%y;}
int divv(int x,int y){return x/y;}
int sudetis(int x,int y){return x+y;}

int main (int argc, char const *argv[])
{
	int x=10; int y=5;

	cout << "Sveika aritmetika!"<<endl;
	cout <<x<< " + "<<y<<" = "<<sudetis(x,y)<<endl;
	cout <<x<< " - "<<y<<" = "<<atimtis(x,y)<<endl;
	cout <<x<< " * "<<y<<" = "<<daugyba(x,y)<<endl;
	cout <<x<< " / "<<y<<" = "<<dalyba(x,y)<<endl;
	cout <<x<< " mod "<<y<<" = "<<modd(x,y)<<endl;
        cout <<x<<" div "<<y<<" = "<<divv(x,y)<<endl;

=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
int sudetis(int x,int y){return x+y;}
int main (int argc, char const *argv[])
{
	cout << x<<" + "<<y<<" = "<<sudetis(x,y)<<endl;
=======
int atimtis(inr x,int y){
return x-y;
}
int main (int argc, char const *argv[])
{
        cout <<x<< " - "<<y<<" = "<<atimtis(x,y)<<endl;
>>>>>>> atimtis
=======
int daugyba(int x, int y){
return x*y;
}
int main (int argc, char const *argv[])
{
        cout <<x<< " * "<<y<<" = "<<daugyba(x,y)<<endl;
>>>>>>> daugyba
=======
double dalyba(int x,int y){
return x/y;
}
int main (int argc, char const *argv[])
{
	cout <<x<< " / "<<y<<" = "<<dalyba(x,y)<<endl;
>>>>>>> dalyba
=======
int modd(int x,int y){
return x%y;
}
int main (int argc, char const *argv[])
{
	cout <<x<< " mod "<<y<<" = "<<modd(x,y)<<endl;
>>>>>>> mod
=======
int divv(int x,int y){
return x/y;
}
int main (int argc, char const *argv[])
{
	cout <<x<<" + "<<y<<" = "<<divv(x,y)<<endl;
>>>>>>> div
>>>>>>> sudetis
	return 0;
}
