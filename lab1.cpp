#include <iostream>
int main(){
using namespace std;
int input;
cin >>input;
cout<<input<<" " ;
while(input!=1){

if(input%2==0){
input=input/2;
}
else{
input=input*3+1;
}
cout<<input<<" " ;
}
}
