#include <iostream>

using namespace std;
class Car{
  public:
     int price;
     string model;

Car(int p,string m);
};
Car::Car(int p,string m){
    price=p;
    model=m;}
int main()
{

    Car obj(300000,"honda");

    cout <<obj.price << "  "<<obj.model<<endl;
    return 0;
}
