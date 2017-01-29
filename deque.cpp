#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
   deque <char> d;
   d.push_back('d');
   d.push_back('e');
   d.push_back('f');
   d.push_front('c');
   d.push_front('b');
   d.push_front('a');
   cout << d.back();
   d.pop_back();
   cout << d.back();
   d.pop_back();
   cout << d.back();
   d.pop_back();
   cout << d.back();
   d.pop_back();
   cout << d.back();
   d.pop_back();
   cout << d.back();
}