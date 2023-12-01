#include<iostream>
using namespace std;


int x,odd = 0,even = 0;


int main(){
    
    while(true){
        cout << "Enter an integer: ";
        cin >> x;

        if(x == 0){

            break;

        }else if(x%2 == 0){

            even++;
        }else if(x%2 != 0){

            odd++;
        }
       

    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}