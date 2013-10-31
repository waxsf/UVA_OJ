#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int main()
{
	string line;
//	ifstream in("1.txt");
	getline(cin,line);
	int result;
	char c;
	while(getline(cin,line))
	{
		if(line[0] != '|')
			break;
		
		result = 0;
		line = line.erase(6,1);
		for(int i=1;i<line.length()-1;i++)
		{
			result *= 2;
			if(line[i] == 'o')
				result += 1;
		}
		c = result;
		cout<<c;


	}
//	cout<<endl;
	return 0;
}
