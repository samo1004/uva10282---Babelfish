#include<iostream>
#include<string>//getline
#include<map>
#include<sstream>//string stream
using namespace std;
int main()
{
	string s;
	map<string, string> name;
	while (getline(cin, s) && s != "")
	{
		string key, value;
		stringstream ss;
		ss << s;
		ss >> value >> key;
		name[key] = value;
	}
	/*for (auto it = name.begin(); it != name.end(); it++)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}*/

	string finding;
	while (cin >> finding)//find有沒有出現過這個key
	{
		if (name.find(finding) == name.end())//沒有的話會是指向end()
			cout << "eh\n";
		else
			cout << name[finding] << "\n";//有就把他的val output
	}
	return 0;
}