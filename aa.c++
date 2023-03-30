#include<iostream>
using namespace std;

int main()
{
    cout << "Hello World";
    int a = 30;
    int *c, *d;
    c=&a;
    d = c;
    a = a + 10;
    cout << *c << endl;
}