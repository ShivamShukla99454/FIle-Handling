#include<iostream>
using namespace std;
class MyException:public exception{
    public:
    const char* what() const throw{
        cout<<"attempted divided by 0"<<endl;
    }
};
int main(){
    int num1,num2;
    cout<<"enter num1 and num2"<<endl;
    cin>>num1>>num2;
    try{
        if(num2==0){
        throw MyException();
        }
        cout<<"num1/num2";
    }catch(MyException e){
        e.what();
    }
}