#include <iostream>
#include <vector>
using namespace std;
int main()
{
    bool hola;  
    vector<bool> v;
    v.push_back (hola); //primero el push_back y luego se declara el iterador
    vector<bool>:: iterator it = v.begin(); //el push_back va antes
    cout << "numero tamano: " << int(v.size()) << endl;
    int i = int(v.size());
    for(;it!=v.end();it++)
    {
        cout << *it << " this\n";
    }
    cout << "fin\n";
    return 0;
}
