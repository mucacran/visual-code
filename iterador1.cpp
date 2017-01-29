#include <iostream>
#include <vector>
using namespace std;
int main()
{
    bool hola;
    vector<bool> v;
    v.push_back (hola);
    vector<bool>:: iterator it = v.begin();
    cout << "numero tamano: " << int(v.size()) << endl;
    int i = int(v.size());
    while(it!=v.end()) // esta forma de preguntar esta interesante
    {
        cout << *it << " this\n";
        it++;
    }
    if(i > 0)
    {
        cout << *it << " this\n";
        it++;
    }
}