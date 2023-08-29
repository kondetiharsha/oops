#include<bits/stdc++.h>
using namespace std;
class HumanBeing{
 private:
 	string name;
 	int age;
 public:
 	void SetData(int val,string word){
 		age=val;
 		name=word;
 	}
 	void GetData(){
 		cout<<" I am "<<name<<" with age "<<age<<endl;
 	}

 };
 int main(){
 	HumanBeing Harsha;
 	Harsha.SetData(24,"Harsha");
 	Harsha.GetData();
 }


