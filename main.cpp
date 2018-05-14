

#include <iostream>
#include "Reader.cpp"
int main(int argc, const char * argv[]) {
    Reader *temp = new Reader();
    temp->readFile("temp.txt");
    std::cout << "Hello, World!\n";
    return 0;
}
