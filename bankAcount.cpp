#include <iostream>
#include <string>
using  namespace std;
class BankAccount{
public:
    string name;


    double get_salary (void){
        return salary;
    }
    void set_salary(double pot_salary){
        if(pot_salary >= 0){
            salary = pot_salary;
        }
        else {
            salary =0;
        }


    }
    double get_bonus(){
            return (calculate_bonus());
       }
private:
    double salary;
    double calculate_bonus(){
        return (salary * 0.25);
    }


};
int main (int argc, char * argv[]){
    BankAccount account1;
    account1.set_salary(10000);
    account1.name = "jorge";

    cout << account1.name << " 's salary is: "<< account1.get_salary() << ", so it's bonus is: "<< account1.get_bonus()<< " dolars\n";















    return 0;
}