#include <vex.h>
using namespace vex;
class Keyboard
{
public:
void Control(){

    while (true) {
        // Read a character from standard input
        char key = getchar();
        char Lshift = GetAsyncKeyState(VK_LSHIFT);
        char space = GetAsyncKeyState(VK_SPACE);
        if(Lshift == true){
            Drivetrain.setDriveVelocity(50 , percent);
        } else{
            Drivetrain.setDriveVelocity(100, percent);
        }
        
        //defining shift as moving faster
        // Control the robot based on keyboard input
        if (key == 'w' || key == 'W') {
            // Move the robot forward
            Drivetrain.drive(forward);
        } else if (key == 's' || key == 'S') {
            // Move the robot backward
            Drivetrain.drive(reverse);
        } else if (key == 'a' || key == 'A') {
            // Turn the robot left
            Drivetrain.turn(left);
        } else if (key == 'd' || key == 'D') {
            // Turn the robot right
            Drivetrain.turn(right);
        } else if(space == true){
            Drivetrain.stop(brake);
        } else {
            Drivetrain.stop(coast);
        }
    }
}
};