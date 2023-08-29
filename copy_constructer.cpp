#include<iostream>
using namespace std;
class H{
	private:
		string name;
		int age;
	public:
		void data(int val,string word){
			age=val;
			name=word;
		}
		void print(){
			cout<<" hi this "<<name<<" With age"<<age<<endl;
		}
};
int main()
{
	H s1;
	s1.data(24,"Hasrha");
	s1.print();
    H s2(s1);
	s2.print();
}