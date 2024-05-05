// WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main(){
  int r,h;
  cin>>r>>h;
  float V = r * r * h * 3.1415;
  cout<<V<<endl;
  return 0;
}
