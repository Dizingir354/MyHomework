#include <iostream>
#include <string>

#include <iomanip>
#include <fstream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	string OutFiles = "D:\\���\\������� �������� ���\\���������������\\All homework\\TextAndSlova\\OutText.txt";
	string InFiles = "D:\\���\\������� �������� ���\\���������������\\All homework\\TextAndSlova\\InText.txt";
	string badText = "D:\\���\\������� �������� ���\\���������������\\All homework\\TextAndSlova\\Slova.txt";
	ofstream fileIn;
	ifstream fileOut;
	ifstream fileOutBad;
	fileOut.open(OutFiles);
	fileOutBad.open(badText);
	fileIn.open(InFiles);

	string str;
	string badSlovo;
	while (!fileOut.eof())
	{
		getline(fileOut, str, ' ');
		getline(fileOutBad, badSlovo, ' ');
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '.' || str[i] == ',' || str[i] == ':' || str[i] == ';' || str[i] == '\n')
			{
				str.erase(i);
			}
		}
		if (str != badSlovo)
		{
			fileIn << str << ' ';
		}
	}

	system("pause");
	return 0;
}