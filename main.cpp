#include<iostream>
#include<fstream>

#include "disk.h"
using namespace std;

void write_disk();
void read_disk();

int main(){
    cout << "Hello world!\n" << "Welcome to S3 File System!";
   	write_disk();
	read_disk();	
}

void write_disk(){
	ofstream file_obj;
	file_obj.open("Input.txt", ios::app);

	disk obj;
	obj.name = "disk1";
	cout << obj.sb->size << endl;
	file_obj.write((char*)&obj, sizeof(obj));
	file_obj.close();
}

void read_disk(){
	ifstream file_obj;
	file_obj.open("Input.txt", ios::in);
	disk obj;
	file_obj.read((char*)&obj, sizeof(obj));
	cout << endl << obj.name << " " << obj.sb->size;
	file_obj.close();
}
