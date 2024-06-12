#include <iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
float add(float a, float b){
    return a+b;
}
int add(int a , int b, int c){
    return a+b+c;
}
int main(){
    cout<<add(5,7)<<endl;
    cout<<add(1.3f,2.4f)<<endl;
    cout<<add(1,2,2)<<endl;;
  return 0;
}
