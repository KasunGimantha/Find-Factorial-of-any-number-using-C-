

#include <iostream>

using namespace std;

int factorial (int n) { if (n==1) {


return 1;

}

else {

return n* factorial(n-1);

}

}

int main() {

int x;

cout << "Input Number to find factorial: " << endl;
cin >> x ;
cout << "Factorial of " << x << " is " << factorial (x);

}


