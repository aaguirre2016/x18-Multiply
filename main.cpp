// Author: Alfredo Aguirre Dominguez

    #include <iostream>
    #include <string>
    #include <vector>

 using namespace std;
 
const int numbers = 13;
  
  int main ()
{ 

 vector < vector < int > > table;
 table.resize(numbers);
   for ( int row = 0; row < numbers; row++ )
  {  table[row].resize(numbers); 
    { 
      cout << " " << row << endl;
    }
   
          for ( int column = 0; column < numbers; column++ )
            {
            table[row][column] = row*column;
            }
  }




  return 0;

}
