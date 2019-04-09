#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

double lee_y_suma (string filename);


int main()
{    
  string filename_1,filename_2;
  double a,b;
  
  filename_1 = "valores_x.txt";
  filename_2 = "valores_y.txt";
  a = lee_y_suma(filename_1);
  b = lee_y_suma(filename_2);
    
  cout << "La suma de los valores de " << filename_1 << " es: " << a << endl;
  cout << "La suma de los valores de " << filename_2 << " es: " << b << endl;
    
  return 0;
}


double lee_y_suma (string filename)
{
  double suma,num;  
  ifstream infile;
  string line;
  infile.open(filename); 
  
  getline(infile, line);
  suma = 0.0;  
  while(infile){
    num = atof(line.c_str());
    suma += num;
    getline(infile, line);
  }
  infile.close();
  return suma;
}
