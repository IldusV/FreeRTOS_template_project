/* Standard includes. */
#include <cstdint>
#include <iostream>
using namespace std;

class base{
  private:
  int x, y;
  
public:
base(int vlx, int vly):x(vlx),y(vly){};
~base(){};
  void setX(int val);
  void setY(int val);


protected:
    
};
