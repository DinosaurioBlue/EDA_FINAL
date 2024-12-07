#include <iostream>
#include <string>
using namespace std;
typedef class Rectangle{
	private:
		double length;
		double width;
		double area(){
			return width * length;
		}
	public:
	void set_dim(double l = 5, double w = 6){
		length = l; 
		width = w;
	}
	double perimeter(); 
	void print_dim(void){
		cout << "l = " <<length<<" w = " << width<< endl; 
	}

	void print_area(){
		cout << "area: "<<area()<<endl;
	}
} rectangle_t;

double Rectangle::perimeter(){
	return ( 2 * (width + length));
}

int main (void){
	rectangle_t  * rec1 = new rectangle_t;
	rec1->set_dim(903,129);
	rec1->print_dim();
	rec1->print_area();
	delete(rec1);

	return 0;
} 

