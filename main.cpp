#include <iostream>

int main() {
using namespace std;
    int term1 = 0;
    int term2 = 1;
    int n = 0;
    int nextTerm = 0;

    cout << "Please enter number of terms: ";
    cin >> n;

do{
    cout << "Number of terms can not equal or less than 3, enter again:  ";
    cin >> n;
}while(n <= 3);

cout << term1 << ", "<< term2 << ", ";
    for(int i = 3; i<= n; i++){
    nextTerm = term1 + term2 ;
    cout <<nextTerm;
    if (i != n) cout << ", ";
    term1 = term2;
    term2 = nextTerm;
    }

cout << endl;
return 0;
}
