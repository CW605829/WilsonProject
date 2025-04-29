#include<string>

using namespace std;

class AnalogIn{
 private:
  string path;
  unsigned int number;
 public:
  AnalogIn();
  AnalogIn(unsigned int n);
  virtual unsigned int getNumber() {return number; } // inline function implementation.
  virtual void setNumber(unsigned int n);
  virtual int readAdcSample();
  virtual ~AnalogIn();
};
