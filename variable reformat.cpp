#include <iostream>
#include <string>

// written by chapel1337
// made on 9/5/2022

void reformat(std::string theString)
{
    unsigned int equal{ theString.find('=', 0) };
    unsigned int length{ theString.length() };

    std::string reformattedString{ theString };
    
    reformattedString[equal] = '{';
    reformattedString += " }";
    
    std::cout << reformattedString << std::endl;
}

std::string read()
{
    // credit to ROMAHKAO
    std::string s{};
    std::getline(std::cin >> std::ws, s);
    return s;
}

int main()
{
    std::string variableString{ "unknown" };

    std::cout << "enter a line of code: " << std::endl;
    variableString = read();

    reformat(variableString);

    main();
}
