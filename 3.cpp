#include "iostream"
#include "cmath"
using namespace std;
int main(int argc, char const *argv[]) {
  float length,ordinate,radius,circumference,area;
  char a;
  while(1)
  {
      int flag=0;
  cout<<"Choose one part:\na   square\nb   rectangle\nc   parallelogram\nd   circle\ne   right triangle\nf   exit\n\n";
   cin >> a ;
   cout<<"\n";
   switch (a) {
     case 'a':{   cout<<"length=";  cin >> length ;cout<<"\ncircumference = "<<4*length<<"\narea = "<<pow(length,2)<<"\n\n";}break;
     case 'b':
     case 'c':{   cout<<"length=";  cin >> length ;cout<<"\nordinate=";  cin >> ordinate ;cout<<"\ncircumference = "<<(ordinate+length)*2<<"\narea = "<<ordinate*length<<"\n\n";}break;
     case 'd':{   cout<<"radius=";  cin >> radius ;cout<<"\ncircumference = "<<2*3.14*radius<<"\narea = "<<3.14*length*length<<"\n\n";}break;
     case 'e':{   cout<<"length=";  cin >> length ;cout<<"\nheight=";  cin >> ordinate ;cout<<"\ncircumference = "<<ordinate+length+sqrt(ordinate*ordinate+length*length)<<"\narea = "<<ordinate*length*0.5<<"\n\n";}break;
     case 'f':flag++; break;
   }if (flag) break;
 }
  return 0;
}
