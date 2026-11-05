#include<iostream>
#include<string>
using namespace std;
void myFunction(string name,int age){
    cout<<name<<"is"<<age<<"years old.\n";

}
int main(){
    myFunction("liam",3);
    myFunction("jenny",14);
    myFunction("anja",30);
    return 0;
    
}