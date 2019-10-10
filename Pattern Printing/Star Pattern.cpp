#include <iostream>

using namespace std;

int main()

{

   int p,c,z;

   cout<<"The pattern is:"<<endl;

   for(p=1;p<=5;p++)

      {

          for(c=1;c<=5-p;c++)

           cout<<" ";

          for(z=1;z<=p;z++)

           cout<<"*";

           cout<<endl;

       
      }

return 0;

}
