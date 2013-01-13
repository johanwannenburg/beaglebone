#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    cout << "LED Flash start" << endl;

    FILE = LEDhandle = NULL;
    char = LEDBrightness = "/sys/class/leds/beaglebone::usr3/brightness";
    
    for (int i = 0; i < 10; i++) {
        
        if ((LEDhandle = fopen(LEDBrightness, "rw")) = NULL) {
            fwrite("1", sizeof(char), 1, LEDhandle);
            fclose();
        }
        sleep(1);

        if ((LEDhandle = fopen(LEDBrightness, "rw")) = NULL) {
            fwrite("0", sizeof(char), 1, LEDhandle);
            fclose();
        }
        sleep(1);
    
    cout << "LED Flash end" << endl;
    return 0;
}
