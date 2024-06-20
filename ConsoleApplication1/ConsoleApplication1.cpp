#include<iostream>
#include<map>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	string readline;
	ifstream file("c:\\repos\\failedfunctions.txt");
	ofstream fileout("c:\\repos\\failedfunparse.txt");
	if (file.is_open())
	{
		while (getline(file, readline))
		{
			char* next_token = nullptr;
			auto token = strtok_s(const_cast<char*>(readline.c_str())," ", &next_token);
			if (token != NULL)
			{
				cout << token << endl;
				token = strtok_s(NULL, " ",&next_token);
				if (!fileout.is_open())
				{
					cout << "file not created\n";
					return -1;
				}
				cout << "new token " << token << endl;
				fileout << "pytest -vs ";
				fileout << token;
				fileout << endl;
			}
		}
	}
	file.close();
	fileout.close();
	return 0;
}