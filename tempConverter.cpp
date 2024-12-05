#include <iostream>

int main() {
  std::string whatTemp;
  double cTemp;
  double fTemp;

  std::cout << "Temperature converter starting up...\n\n";
  std::cout << "What temperature would you like to convert to? (Fahrenheit / Celsius)\n";
  std::cin >> whatTemp;

  if (whatTemp == "Fahrenheit") {
    std::cout << "\nEnter the temperature in Celsius: ";
    std::cin >> cTemp;
    fTemp = (cTemp * 1.8) + 32;  
    std::cout << "\nThe temperature in Fahrenheit is: " << fTemp << "°F\n\n";  
  } else if (whatTemp == "Celsius") {
    std::cout << "\nEnter the temperature in Fahrenheit: ";
    std::cin >> fTemp;
    cTemp = (fTemp - 32) / 1.8;  
    std::cout << "\nThe temperature in Celsius is: " << cTemp << "°C\n\n";  
  } else {
    std::cout << "\nInvalid unit of temperature";
    return 0;
  }

  std::cout << "Temperature converter shutting down...\n\n";

  return 0;
}
