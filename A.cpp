#include <iostream>

using namespace std;


int main() {
    int res {1}, n;
    cout << "Please ENter a factorial: ";
    cin >> n;
    for(int i = 1; i <= n; ++i)    
        res *= i;

    cout << "The factorial of  " << n << "  is  " << res << endl; 
}