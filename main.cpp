#include <iostream>

using namespace std;


double divide(const int & a, const int & b){
    return (a/b);
}
int adds(int a, int b) {
    return a - b;
}
bool isTrue(int c){
    return false;
}
void doSomething(){
    cout << "Something" << endl;
}

int main() {
    cout << "merge conflicts?" << endl;
    cout << "Hello, Worlllllllllld! i am alive" << endl;
    cout << "My github repo" << endl;
    cout << "Is 5 true? " << boolalpha << isTrue(5) << endl;


    cout << "3 + 5 = " << adds(3, 5) << endl;
    cout << "8/4=" << divide(8,4) << endl;
    return 0;
}