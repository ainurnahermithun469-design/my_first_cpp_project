#include<iostream>
using namespace std;
int main()
{
  int age;

  cout<<"Enter your age:";
  cin>>age;

  if(age>=18) {

    if(age>=60){
        cout<<"senior Citizen";
    }
    else{
        cout<<"Adult";
    }
  }
    else{
        cout<<"Minor";
    }







    return 0;
}
