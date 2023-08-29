#include<bits/stdc++.h>
using namespace std;
class HumanBeing{
 private:
 	string name;
 	int age;
 public:
 	HumanBeing(){
 		name="NO name";
 		age=0;
 	}
    HumanBeing(int val,string word){
        age=val;
        name=word;
    }
 	HumanBeing(int val){
 		age=val;
 		name="HARSHA";
 	}
    HumanBeing(string word){
        age=90;
        name=word;
    }
 	void GetData(){
 		cout<<age<<" "<<name<<endl;
 	}

 };
 int main(){
 	HumanBeing Harsha;
 	Harsha.GetData();
    HumanBeing Harshaa(19,"harsha");
    Harshaa.GetData();
    HumanBeing Harshaaa(17);
    Harshaaa.GetData();
    HumanBeing Harshaaaa("koushik");
    Harshaaaa.GetData();
 }


