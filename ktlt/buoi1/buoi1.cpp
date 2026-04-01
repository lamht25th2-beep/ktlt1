

#include <iostream>
#include <vector>
#include < limits>
using namespace std;

struct person {
    int id, age;
    string name, hometown;
};
void show(vector<person> p) {
    if (p.size() == 0)
        cout << "an empty list" << endl;
    else {
        for (int i = 0; i < p.size(); i++) {
            cout << "\t+ id: " << p[i].id << endl;
            cout << "\t+ name: " << p[i].name << endl;
            cout << "\t+ age: " << p[i].age << endl;
            cout << "\t+ home town: " << p[i].hometown << endl;
        }
    }

}
int  main(){
    do {
        cout << "----HUMAN RESOURCE MANAGEMENT----" << endl;
        cout << "1. Show person list " << endl;
        cout << "2. add a person  " << endl;
        cout << "3. remove a person by id  " << endl;
        cout << "4.find people by name  " << endl;
        cout << "5.export to file " << endl;
        cout << "6.import from file  " << endl;
        cout << "0. quit " << endl;
        int cmd;
        cin >> cmd;
        switch (cmd) {
        case 1: {
            show(list);
            break;
        }
        case 2: {
            person a;
            cout << "id:";
            cin >> a.id;
            cout << "name:";
            cin >> a.name;
            cout << "age:";
            cin >> a.age;
            cout << "hometown:";
            cin >> a.hometown;
            list.push_back(a);
            break;
        }
        case 3: {
            break;
        }
        case 4: {
            break;
        }
        case 5: {
            break;
        }
        case 6: {
            break;
        }
        case 0: {
            return 0;
        }
        default: {
            cout << "your command isn't found . try again " << endl;
        }
        }
        cout << "press enter to continue . . .";
        cin.ignore();
        cin.get();
    } while (true);
    /*int a = 5;
    int* p = &a;
    a = 8;
    *p = 10;
    cout << a << "\t" << *p;*/
   
}

