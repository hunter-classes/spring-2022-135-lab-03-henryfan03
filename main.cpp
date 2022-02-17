// add your code as appropriate
#include "reservoir.h"
#include <iostream>

int main()
{
  std::cout << "LAB TASK A:\n";
  std::cout << "-------------------------------------\n\n";
  std::cout << "get_east_storage(01/01/2018): " << get_east_storage("01/01/2018") << std::endl;
  std::cout << "get_east_storage(02/22/2018): " << get_east_storage("02/22/2018") << std::endl;
  std::cout << "get_east_storage(04/29/2018): " << get_east_storage("04/29/2018") << std::endl;
  std::cout << "\n\n\n";
  std::cout << "LAB TASK B:\n";
  std::cout << "-------------------------------------\n\n";
  std::cout << "get_min_east(): " << get_min_east() << std::endl;
  std::cout << "get_max_east(): " << get_max_east() << std::endl;
  std::cout << "\n\n\n";
  std::cout << "LAB TASK C:\n";
  std::cout << "-------------------------------------\n\n";
  
  return 0;
}
