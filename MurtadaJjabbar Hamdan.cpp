#include <iostream>
using namespace std;
class car{
public:
    int id;
	string name;
	void disblay () {
		cout << id << " name:" << name << endl;
	}	
};
int main () {
	car s1;
	s1.id=1990;
	s1.name= "Mercedes";
	s1.disblay();
	return 0;
}
