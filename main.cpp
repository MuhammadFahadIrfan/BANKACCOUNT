
// Example program
#include <iostream>
#include <string>
#include "bankaccount.h"
using namespace std;


int main()
{ int a,b;

    bankaccount b1;
    cin>>a;
b=b1.withdraw(a);
cout<<b;
b1.display();
b1.getaccountnumber();
b1.getaccountholder();
b1.getcurrentbalance();
    system ("pause") ;
    }