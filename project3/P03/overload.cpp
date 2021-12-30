//
// Tomás Oliveira e Silva, AED, September 2020
//
// example of function overloading (same function name, different argument numbers and/or data types)
//

#include <iostream>

using std::cout; // make this symbol from the std namespace directly visible

void show(const int i){cout << "int: " << i << std::endl; }

void show(const double d){cout << "double: " << d << std::endl; }

void show(const char *s,const char *h = "string: "){cout << h << s << std::endl; }

void show(const char c){cout << "char: " << c << std::endl; }

void show(const int a[], const int n=3){
	cout << "array: [" << a[0] << ", " << a[1] << ", " << a[2] << "]" << std::endl;
	/*cout << "array: [";	
		for (int i=0; i<n; i++){
			cout << a[i]
		             << ", ";
		}
	cout << "]"
	     << std::endl;*/
}

int main(void)
{
  show(1.0);
  show("hello");
  show(-3);
  show("John","name: ");	// 'John' vai ser char *s e 'name: ' char *h, e printa h e s por esta ordem
  show('c');
  int a[3] = {2, 7, -1};
  show(a);
  return 0;
}
