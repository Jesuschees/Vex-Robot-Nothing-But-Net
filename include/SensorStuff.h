#include <vex.h>
using namespace vex;

class Sensors{
public:
int ultrasonicValue = RangeFinderC.distance(inches);
void ultrasonicPrint(){
    while(true){
        Brain.Screen.print("The distance is: %d", ultrasonicValue);
        std::cout <<"The distance is: "<< ultrasonicValue << std::endl;
        }
    }
};
