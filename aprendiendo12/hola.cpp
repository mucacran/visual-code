#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(4);
    for(int i=0; i<v.size();i++)v[i]=i+1;
    
    vector<int> ve(4);
    for(int i=0; i<ve.size();i++)ve[i]=i+1;

    vector<int>::iterator b = v.begin();
    b++;
    v.insert(b,2);

    while(b!=v.end()) cout << *b << ", ";

    return 0;
}