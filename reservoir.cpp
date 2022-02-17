#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

double get_east_storage(std::string date) {
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
  else {
    std::string junk, time;
    getline(fin, junk);
    double eastSt, eastEl, westSt, westEl;
    while(fin >> time >> eastSt >> eastEl >> westSt >> westEl)
    {
      fin.ignore(INT_MAX, '\n');
			if (time == date)
			{
				fin.close();
				return eastSt;
			}
    }
  }
}

double get_min_east() {
  double minSoFar = 9999999;
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
  else {
    std::string junk, time;
    getline(fin, junk);
    double eastSt, eastEl, westSt, westEl;
    while(fin >> time >> eastSt >> eastEl >> westSt >> westEl)
    {
      fin.ignore(INT_MAX, '\n');
			if (eastSt < minSoFar)
			{
				minSoFar = eastSt;
			}
    }
  }
  fin.close();
  return minSoFar;
}

double get_max_east() {
  double maxSoFar = 0;
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
  else {
    std::string junk, time;
    getline(fin, junk);
    double eastSt, eastEl, westSt, westEl;
    while(fin >> time >> eastSt >> eastEl >> westSt >> westEl)
    {
      fin.ignore(INT_MAX, '\n');
			if (eastSt > maxSoFar)
			{
				maxSoFar = eastSt;
			}
    }
  }
  fin.close();
  return maxSoFar;
}

std::string compare_basins(std::string date) {
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
  else {
    std::string junk, time;
    getline(fin, junk);
    double eastSt, eastEl, westSt, westEl;
    while(fin >> time >> eastSt >> eastEl >> westSt >> westEl)
    {
      fin.ignore(INT_MAX, '\n');
			if (time == date)
			{
				fin.close();
				return eastSt;
			}
    }
  }
}
