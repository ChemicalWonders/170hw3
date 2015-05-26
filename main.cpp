#include <iostream>
#include <string>

// Including the Grid files
#include "grid.cpp"

using namespace std;

int main(int argc, char* argv[])
{
  // Will print out Usage if person just types in ./a.out
  if (argc < 3)
  {
      cout << "Usage: ./a.out n m " << endl;
  }

  // Prints out argc when there is 3 total terms
  if (argc == 3)
  {
    // Converts argv values from char* to ints
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);

    cout << "n = " << n << " ";
    cout << "m = " << m << endl;

   // Initalizes a grid of size n x n with m obsticles and m rewards
   Grid::Grid(n, m);
  // GridCell::print("10", 7);
  }

  return 0;
}
