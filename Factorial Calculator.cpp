#include<iostream>
using namespace std;

int factorial(int k){
    if (k > 0)
        return k * factorial(k-1);
    
    else
        return 1;
    
}

int main(){
    int base_number;
    cout << "This is factorial calculator" << endl;
    cout << "Enter your number: ";
    cin >> base_number;
    cout << factorial(base_number);
}
