#include <iostream>
using namespace std;
int main () {
       int num;
       cout<<"Enter a number to check grade:";
       cin>>num;
           switch (num)
          {
              case 10: cout<<"Grade A"; break;
              case 20: cout<<"Grade B"; break;
              case 30: cout<<"Grade C"; break;
              default: cout<<"Fail"; break;
          }
    }
