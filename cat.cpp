#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
class Cat{
	private:
		string name;
		string color;
		string fav_toy;
	public:
		void print_cat(){
			cout << "name: " << name<< "\ncolor: "<<color<< "\nfavtoy:  "<<fav_toy<<endl;
		}
		Cat(string n = "jorge", string c = "marron", string ft = "maraca"){
			name = n;
			color = c;
			fav_toy = ft;
		}
		
};

int main (void){
	Cat thomas("thomas"	);
	thomas.print_cat();
	
	return 0;
} 

