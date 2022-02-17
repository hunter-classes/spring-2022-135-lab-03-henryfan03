#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <vector>
#include <sstream>

void reverse_order(std::string date1, std::string date2) {
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  std::vector<std::string> data;
  std::string junk, time;
  bool validtime = false;
  getline(fin, junk);
  double eastSt, eastEl, westSt, westEl;
  while(fin >> time >> eastSt >> eastEl >> westSt >> westEl)
  {
  fin.ignore(INT_MAX, '\n');
	if (time == date1)
		{
      validtime = true;
		}
  if (validtime == true)
    {
      std::stringstream elevation;
      elevation << westEl;
      std::string entry = time + "  " + elevation.str() + " ft";
      data.push_back(entry);
    }
  if (time == date2)
    {
      validtime = false;
      fin.close();
    }
    }
    for(int i = data.size();i > -1;i--) {
      std::cout << data[i] << std::endl;
    }
  }
