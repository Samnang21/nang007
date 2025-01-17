#include<iostream>
#include<iomanip>

using namespace std;

int main (){
	string name = " " ; char sex = 0 ; float height = 0 , weight = 0 ;
        
        cout << setw(12) <<"Name:";cin >> name;
        cout << setw(12) <<"Sex:"; cin >> sex;
        cout << setw(12) <<"Height(m):";cin >> height;
        cout << setw(12) <<"Weight(kg):";cin >> weight;
        
    return 0;
}
