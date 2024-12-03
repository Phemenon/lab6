#include<iostream>
using namespace std;

int main(){
    int i=1,odd=0,even=0;

    while(i!=0){
      cout << "Enter an integer: ";
      cin>>i;
      if(i!=0){
            if(i%2==0){
                even++;
            }else{
                odd++;
            }
        }
    }
    cout << "#Even numbers = "<<even<<"\n";
    cout << "#Odd numbers = "<<odd<<;
    return 0;
}
