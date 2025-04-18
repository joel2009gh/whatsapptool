#include <iostream>
#include <string>
#include <cstdlib>
int main() 
{
    std::string phoneNumber = "Phone number here";
    std::string message = "Hello World!"; // this is the message
    std::string encodedMessage = "";
    for (char c : message) {
        if (c == ' ') encodedMessage += "%20";
        else encodedMessage += c;
    }
    // url
    std::string url = "https://web.whatsapp.com/send?phone=" + phoneNumber + "&text=" + encodedMessage;
    // open the browser (has to be linux in order to get this working)
    std::string command = "xdg-open '" + url + "'";
    system(command.c_str());
    std::cout << "Succesfull..." << std::endl; 
    return 0; // returns 0 if succesfull
	      // or else it will return 1 (error)
}

