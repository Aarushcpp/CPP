// WAP to find the difference between ASCII of two characters ,take them as input .
#include<iostream>
using namespace std;
int main(){
  char ch1,ch2;
  cin>>ch1>>ch2;
  int ascii1=(int)ch1;
  int ascii2=(int)ch2;
  cout<<ascii1-ascii2;
  return 0;
}
