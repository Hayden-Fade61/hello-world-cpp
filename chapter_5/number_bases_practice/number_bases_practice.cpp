// number_bases_practice: Printing out numbers in different bases to become more familiar with them
// Author: Saifullah Ndubano

#include <iostream>
#include <bitset>
#include <format>

int main() {
    using namespace std;
    // Different ways to create a bitset
    bitset<8> binary1{ 63 }; // Decimal string representing 63
    bitset<8> binary2{ 077 }; // Octal string representing 63
    bitset<8> binary3{ 0b0011'1111 }; // Binary string representing 63
    bitset<8> binary4{ 0x3F }; // Hex string representing 63

    // Outputting bitset values
    cout << "Initialised with 63: " << binary1 << '\n';
    cout << "Initialised with 077: " << binary2 << '\n';
    cout << "Initialised with 0b0011'1111: " << binary3 << '\n';
    cout << "Initialised with 0x3F: " << binary4 << '\n';

    // Showing number bases with format lib
    int hex1{ 0xC9 }; // Hex representation of 209
    int oct1{ 035 };  // Octal representation of 29
    int i{ 153 };

    cout << format("i has value {} in decimal and value {:b} in binary\n", i , i);
    cout << format("i has value {} in decimal and value {:x} in hex\n", i, i);
    cout << hex1 << ": " << hex << hex1 << endl; // hex1's decimal and hex representations with cout
    // Find out why cout outputs oct1 in hex on first print then octal on second
    cout << oct1 << ": " << oct << oct1 << endl; // oct1's hex and octal representations with cout
    cout << oct1 << ": " << oct1 << '\n'; // hex1's decimal and hex representations with cout

    return 0;
}