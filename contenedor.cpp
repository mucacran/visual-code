#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<bool> v(10,true);
    vector<bool> :: iterator it;

    string ent;

    do
    {
        cout << "\n>: ";
        cin >> ent;
        cout << "\ntamano del Antes vector: " << v.size() << endl;
        v.push_back(false);
        //v.insert(4,0)
        for (it = v.begin();it!=v.end();it++)
        {
            cout << *it << ", " ;
        }

        cout << "\ntamano del vector despues: " << v.size();

    }while(ent == "si");

    cout << endl;
    return 0;
}