#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<unistd.h>
#include"../HeaderFiles/analogIn.h"

#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"

using namespace std;

AnalogIn::AnalogIn(){
}

AnalogIn::AnalogIn(unsigned int n){
  ostringstream a;
  a << ADC_PATH << n;
  path = string(a.str());
}

void AnalogIn::setNumber(unsigned int n){
  number = n;
}

int AnalogIn::readAdcSample(){
  stringstream ss; 
  ss << path << "_raw";
  fstream fs; 
  fs.open(ss.str().c_str(), fstream::in);
  fs >> number;
  fs.close();
  return number;
}

AnalogIn::~AnalogIn(){
cout << "destroying the Analog coonection with path: " << path << endl;
}
