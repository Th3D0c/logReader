
#include <string>
#include <vector>
#include <iostream>
//#include <fstream>

//#include <cstdio>


#include "../includes/IDriver.interface.h"
#include "../includes/HDriver_type1.class.h"




using namespace std;

vector<string> Driver_type1::splitLine() {
	
	string line="011110|12mb|6454435343|level - Object::method Message blablablablablalbal";
	vector<string> decompose;
	while(line.find('|') != string::npos ) {
		decompose.push_back(line.substr(0, line.find('|') ) );
		line = line.substr(line.find('|')+1, line.length() );
//		cout << line << endl;
	}
	if(line.find('-') != string::npos ) {
		decompose.push_back(line.substr(0, line.find('-') ) );
		decompose.push_back(line.substr(line.find('-')+1, line.length() ) );
	} else {
		cout << "error parsing" << endl;
	}
	return decompose;
}	
