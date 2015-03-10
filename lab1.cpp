
#include <iostream>
using namespace std;

int main(){
    int num1;
    cout<<"Enter an interger: ";
    cin>>num1;

    for(;;){
        cout<<num1<<" ";
	if(num1 == 1){
	    break;
	}else if((num1 % 2) == 0){
	    num1 = num1 / 2;
	}else{
	    num1 = 3 * num1 + 1;
	}
    }
    return 0;
	    
}
