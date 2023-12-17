#include <bits/stdc++.h>
using namespace std;

// base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee(){};
};

// derived class syntax
/*
class {{derived-class-mame}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc......
}
*/

/* Note:-
1. Deafault visibility mode is private
2. public visibility mode: public members of the base class becomes Public members of the derived class
3. private visibility mode: public members of teh base class becomes Private members of the derived class
4. Private members are never inherited
*/

// creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}