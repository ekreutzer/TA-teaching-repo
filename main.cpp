#include <iostream>

using namespace std;


double divide(const int & a, const int & b){
    return (a/b);
}
int add(int a, int b) {
    return a + b;
}

int main() {
    cout << "Hello, World!" << endl;
    cout << "My github repo" << endl;


    cout << "3 + 5 = " << add(3, 5) << endl;
    cout << "8/4=" << divide(8,4) << endl;
    return 0;
}