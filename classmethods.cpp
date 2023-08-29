#include<bits/stdc++.h>
using namespace std;
class HumanBeing{
 public:
 	string name;
 	void Introduce(){
 		cout<<"Hi this is "<<name<<endl;
 	}
};
int main()
{
  HumanBeing harsha;
  harsha.name="HARSHA";
  harsha.Introduce();

  HumanBeing*sam=&harsha;
  (*sam).name="sam";
  (*sam).Introduce();
}