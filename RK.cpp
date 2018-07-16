#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double Function(double x, double y){
	return (3*exp(-x))-(0.4*y);
}

void report(double x, double y, double f, int a){
	
	cout<<setw(10)<<a<<setw(15)<<x<<setw(15)<<y<< setw(15) << f <<endl;
}

int main(){
double x0, y0, h, k1, k2, k3, k4;
int N;
cout << "Ingrese el valor de x0: ";
cin >> x0;
cout << "Ingrese el valor de y0: ";
cin >> y0;
cout << "Ingrese el tamaño de paso: ";
cin >> h;

cout << "Cuantos pasos son requeridos? ";
cin >> N;
  cout<<endl;
  cout<<setw(10)<<"I"<<setw(15)<<"X"<<setw(15)<<"Y"<<endl;
  cout<<setw(10)<<"-"<<setw(15)<<"--"<<setw(15)<<"--"<<endl;
  report(x0,y0,Function(x0,y0),0);
for(int a = 0; a < N; a++){
       k1=Function(x0,y0);
       k2=Function(x0+h/2,y0+h*k1/2);
       k3=Function(x0+h/2,y0+h*k2/2);
       k4=Function(x0+h,y0+h*k3);

       y0=y0+(k1+2*k2+2*k3+k4)*h/6;
       x0 += h;
       report(x0,y0,Function(x0,y0),a);
}

return 0;
}
