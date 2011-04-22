// #include "/usr/include/libpq-fe.h"

#include <string>
#include <vector>
#include <iostream>
//#include <fstream>

//#include <cstdio>


#include "../includes/IDriver.interface.h"
#include "../includes/HDriver_type1.class.h"



using namespace std;

int main () {
	cout << "Hellcome!!" << endl;
	
	vector<string> decompose;
	string tmp_values_string;
	
	Driver_type1 drv ;
	decompose = drv.splitLine();

	// Utilisation d'un iterateur plutot que d'une boucle "a la mano" 
	for(vector<string>::iterator it = decompose.begin(); it!=decompose.end(); ++it) {
		if(it != decompose.begin() ) {
			tmp_values_string += ", ";
		}
		tmp_values_string += "'" + *it + "'";
	}
	
	cout << "INSERT INTO tablename (pid, ram, time, level, message) VALUES ("+tmp_values_string+");" << endl;
	
}

