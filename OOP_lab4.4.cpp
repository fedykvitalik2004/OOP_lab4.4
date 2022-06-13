#include <iostream>
#include "Ball.h"
#include "Parallelepiped.h"
#include <typeinfo>

using namespace std;

class C1 {
public:
    int x;
};

class C2
    :public C1 {
public:
    char x;
};

int main()
{
    C1* a = new C2();
    a->x = 3;
    cout << a->x;
    C1 *a=dynamic_cast<C1*>
    cout << "Base class: " << typeid(a).name() << endl;
    cout << "Deritative class: " << typeid(*a).name() << endl << endl;

    return 0;
}