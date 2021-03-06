#include <iostream>
#include <list>

using namespace std;


void display (list<string> lyst) {
    list<string>:: iterator iter = lyst.begin ();
    while (iter != lyst.end ()) {
        cout << *iter << endl;
        iter++;
    }
}

int main () {
    list<string> names;
    names.push_back ("Mary");
    names.push_back ("Zach");
    names.push_back ("Elizabeth");
    
    cout << "First name: " << names.front () << endl;
    cout << "Last name: " << names.back () << endl;
    cout << endl;
    
    cout << "Normal order" << endl;
    display (names);
    cout << endl;
    
    cout << "Reverse order" << endl;
    names.reverse ();
    display (names);
    cout << endl;
    
    cout << "Sort order" << endl;
    names.sort ();
    display (names);
    cout << endl;

    cout << "Size of list: " << names.size () << endl;
    return 0;
}