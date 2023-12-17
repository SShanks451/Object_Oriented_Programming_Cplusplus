// static members are by deafult initialised by zero
// static members are shared by all the objects of the class. They are not different for different objects.
// static methods can only access the static data members

#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
        ;
    }

    static void getCount(void)
    {
        // cout << id; // throw an error
        cout << "The value of count is " << count << endl;
    }
};

// count is the static data member of class
int Employee ::count = 1000; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}