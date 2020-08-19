Test using GITHUB
// Author Your Name
// Description: Hello World in C++
//============================================================
main
#include <iostream>
#include <string>
using namespace std;
int hello1Function(string name1);
int hello2Function(string name2);
int main()
{
string name1="BOB";
hello1Function(name1);
string name2="Phil";
hello2Function(name2);
return 0;
}

//hello1Function
/*
* hello1Function.cpp
*
*/
#include <iostream>
using namespace std;
int hello1Function(string name1)
{
cout << "hello World " << name1 << endl;
return 0;
}
// hello1Function
