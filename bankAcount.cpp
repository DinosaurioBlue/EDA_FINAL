#include <iostream>
#include <string>
using  namespace std;
class BankAccount{
public:
    std :: string name;
    int balance;



};
int main (int argc, char * argv[]){
    BankAccount account1;
    account1 = { "jorge" , 10000
    };

    cout << account1.name << "has " << account1.balance << "dolars"<<endl;












    return 0;
}