#include <fstream>
#include <iostream>
using namespace std;

void suma (string filename);


int main()
{    
  string filename_1;
  string filename_2;
  
  filename_1 = "valores_x.txt";
  filename_2 = "valores_y.txt";
  suma(filename_1);
  suma(filename_2);    
    
  return 0;
}


void suma (string filename)
{
  double suma;
  ifstream infile; 
  string line;
  infile.open(filename); 
  
  getline(infile, line);
  suma = 0.0;
  while(infile){
    getline(infile, line);
    suma += stoi(line);     
  }
  cout << "La suma de los valores de " << filename << "es: " << endl;
  cout << suma << endl;
  infile.close();
}
