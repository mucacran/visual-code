#include <iostream>
#include <vector>
using namespace std;

/*void f(char ch)
{
   if (('A' <= ch) && (ch <= 'H'))
   {
      f(ch - 1);
      cout << ch;
   }
   else
      cout << endl;
}

int main()
{
   f('C');
   return 0;
}*/

/*void f(char ch)
{
   if (('A' <= ch) && (ch <= 'H'))
   {
      f(ch - 1);
      cout << ch;
   }
   else
      cout << endl;
}
 
int main()
{
   f('G');
   return 0;
}*/

// void g(char ch)
// {
//    if (('A' <= ch) && (ch <= 'H'))
//    {
//       g(ch + 1);
//       cout << ch;
//    }
//    else
//       cout << endl;
// }

// int main()
// {
//    g('C');
//    return 0;
// }


int mystery1(int value1, int value2)
{
   if (value1 == 0)
   {
      return 1;
      }
   else
      return value2 * mystery1(value1 - 1, value2);
}

int main()
{
    int a1= 25;
    int b= 5;
    mystery1( a1,b);

    return 0;
}
