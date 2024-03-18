#include<iostream>
using namespace std;
int main()
{
  string name,country,covid;
  int id,ari_time,dep_time,lugges;
  cout<<"enter the name"<<endl;
  cin>>name;
  cout<<"enter which country"<<endl;
  cin>>country;
  cout<<"enter id"<<endl;
  cin>>id;
  cout<<"enter the ari_time"<<endl;
  cin>> ari_time;
  cout<<"enter the dep_time"<<endl;
  cin>>dep_time;
  cout<<"no of lugges"<<endl;
  cin>>lugges;
  cout<<"enter the covid rep"<<endl;
  cin>>covid;
  if(covid == "pos")
  {
      cout<<"sorry you are not allowed to travel"<<endl;

  }
  else if(covid == "neg")
  {
      cout<<"happy journey";
  }

}
