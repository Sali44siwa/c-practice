#include <iostream>

using namespace std;
class myclass{
 public:
     string model;
     string name;
     int age;
     myclass( string x, string y, int g){
   model=x;
   name=y;
  age=g;}
     };
int main()
{
myclass myobj("salalal","sally",32);


   cout<<myobj.model<<"  "<<myobj.name<<"  "<<myobj.age<<endl;
    return 0;
}
