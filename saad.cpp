#include <iostream>
using namespace std;

int sum(int x , int y);
void main() {
	cout << "hello world \n";
    cout << "how are u today! \n";
    int x = 8;
    int age;
    string name;
    cout << x + 2 << endl;

    cout << x + 4 << endl; 

    cout<<"enter age \n";
    cin >> age;

    cout << age << endl;
    cout << age + 4 << endl; 
}

int sum(int x, int y){
    return x + y;
}
