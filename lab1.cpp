/*************************************************************************************************
*Program Created By: Garrett Rose
* Class: CSCI208
* Program Purpose: Store temperature date  January through June in array
* After data is stored in the array print the array contents
* Use new fstream functions clear() and seekg() to allow for reading data directly from text file
*************************************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  //Best practice to declare an array size constant in case we need to increase or decrease the size
  const int ARRAY_SIZE = 50;
  char data[ARRAY_SIZE];
  int count;
  string line;
  //Declaring our file io variables and specifying the files to open
  ifstream infile("months.txt");
  ofstream outfile("output.txt");

  //Does the input file exist? If so open it. If not then display the error message
  if(!infile){
    cout<<"There is no input file or file could not be found"<<endl;
    }
  //If the file exists then proceed with reading data to the array then print the contents of the array
  else{
    while(infile.getline(data,ARRAY_SIZE)){
      outfile<<data<<endl;
      count++;
    }
  //Resetting to read file again
    infile.clear();
    infile.seekg(0,infile.beg);
  //Read directly from months txt file and outputting instead of reading to array then outputting the array
    while(getline(infile,line)){
      outfile<<line<<endl;
    }
  }
  return 0;
}
//END OF MAIN
