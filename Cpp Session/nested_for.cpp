#include <iostream>
using namespace std;
int main()
{
    int i;// variable declaration
         for(i=0;i<=10;i++)
          {
              // update expression i++; i--;
              //dry run
              //i=0; i=1;.....i=11
            cout<<i <<"\n";
          }

         return 0;
}

/*
//break
#include <iostream>
using namespace std;
int main() {
      for (int i = 1; i <= 10; i++)
          {
              if (i == 5)
              {
                  break;
              }
        cout<<i<<"\n";
          }
}
*/

/*
//nested
#include <iostream>
using namespace std;

int main () {
        for(int i=1;i<=3;i++){
             for(int j=1;j<=3;j++){
            cout<<i<<" "<<j<<"\n";
          }
        }
    }
*/

/*
//continue
#include <iostream>
using namespace std;
int main()
{
 for(int i=1;i<=3;i++){
            for(int j=1;j<=3;j++){
             if(i==2&&j==2){
                continue;
                        }
                cout<<i<<" "<<j<<"\n";
                    }
            }
}
*/
