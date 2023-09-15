#include <iostream>
#include "Chandrayaan.h"  // Include the header file where the Chandrayaan class is defined
using namespace std;
//All tests are from initial position (0,0,0)-N
// Define a simple test function
void testSpacecraftMovementAndRotation() {
    Chandrayaan spacecraft;

    // Test forward movement in N direction
    spacecraft.processCommand("f");
    if (spacecraft.getX() == 0 && spacecraft.getY() == 1 && spacecraft.getZ() == 0 &&
        spacecraft.getDirection() == "N") {
        cout << "Test 1 Passed\n";
    } else {
        cout << "Test 1 Failed\n";
    }

    // Test backward movement in N direction
    spacecraft = Chandrayaan(); // Reset spacecraft
    spacecraft.processCommand("b");
    if (spacecraft.getX() == 0 && spacecraft.getY() == -1 && spacecraft.getZ() == 0 &&
        spacecraft.getDirection() == "N") {
        cout << "Test 2 Passed\n";
    } else {
        cout << "Test 2 Failed\n";
    }

    // Test turning right from N to E
    spacecraft = Chandrayaan(); // Reset spacecraft
    spacecraft.processCommand("r");
    if (spacecraft.getX() == 0 && spacecraft.getY() == 0 && spacecraft.getZ() == 0 &&
        spacecraft.getDirection() == "E") {
        cout << "Test 3 Passed\n";
    } else {
        cout << "Test 3 Failed\n";
    }

    // Test turning left from N to W
    spacecraft = Chandrayaan(); // Reset spacecraft
    spacecraft.processCommand("l");
    if (spacecraft.getX() == 0 && spacecraft.getY() == 0 && spacecraft.getZ() == 0 &&
        spacecraft.getDirection() == "W") {
        cout << "Test 4 Passed\n";
    } else {
        cout << "Test 4 Failed\n";
    }
    // Test two left turns from N to S
    spacecraft = Chandrayaan(); // Reset spacecraft
    spacecraft.processCommand("l");
    spacecraft.processCommand("l");
    if (spacecraft.getX() == 0 && spacecraft.getY() == 0 && spacecraft.getZ() == 0 &&
        spacecraft.getDirection() == "S") {
        cout << "Test 5 Passed\n";
    } else {
        cout << "Test 5 Failed\n";
    }

    // Test three left turns from N to E
    spacecraft = Chandrayaan(); // Reset spacecraft
    spacecraft.processCommand("l");
    spacecraft.processCommand("l");
    spacecraft.processCommand("l");
    if (spacecraft.getX() == 0 && spacecraft.getY() == 0 && spacecraft.getZ() == 0 &&
        spacecraft.getDirection() == "E") {
        cout << "Test 6 Passed\n";
    } else {
        cout << "Test 6 Failed\n";
    }

    // Test two right turns from N to S
    spacecraft = Chandrayaan(); // Reset spacecraft
    spacecraft.processCommand("r");
    spacecraft.processCommand("r");
    if (spacecraft.getX() == 0 && spacecraft.getY() == 0 && spacecraft.getZ() == 0 &&
        spacecraft.getDirection() == "S") {
        cout << "Test 7 Passed\n";
    } else {
        cout << "Test 7 Failed\n";
    }

    // Test three right turns from N to W
    spacecraft = Chandrayaan(); // Reset spacecraft
    spacecraft.processCommand("r");
    spacecraft.processCommand("r");
    spacecraft.processCommand("r");
    if (spacecraft.getX() == 0 && spacecraft.getY() == 0 && spacecraft.getZ() == 0 &&
        spacecraft.getDirection() == "W") {
        cout << "Test 8 Passed\n";
    } else {
        cout << "Test 8 Failed\n";
    }

}

int main() {
    // Run the test function
    testSpacecraftMovementAndRotation();

    return 0;
}
