#include <iostream>
#include <cmath>

using namespace std;
bool check(int);

int main(){
    int number;
    
    cout << "Enter the number to check if it is a prime number: ";
    cin >> number;
    cin.ignore();

    if(check(number))
        cout <<"This number is a prime number." << endl;
    else
         cout <<"This number is NOT a prime number." << endl;

    getchar();
    return 0;
}

bool check(int number){
    if (number <=1) return false;
    for (unsigned int i = 2; i <= sqrt(number); i++){
        if(!(number % i))
        return false;
    }
    return true;
}