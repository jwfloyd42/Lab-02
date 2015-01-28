#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//! Class to create an output file and write Strings to it
/*!
 * The WriteFile class accepts a character array which is the file name
 * The constructor then creates the output file based on the given file name
 * The user specifies what it wants to write to the file in the form of a String
 * The String is then written to the output file
 * The destructor calls the close procedure to close the output file when the user is finished
 */

class WriteFile
{
   private:
   ofstream output_file;
   bool closed;
   
   public:
//! The constructor uses a character array as a file name to create the output file if it does not already exist and open it
   WriteFile(const char* file_name);
//! The destructor uses the close procedure to close the output file once the user is finished writing to it
   ~WriteFile();
//! Takes a String passed by the user and writes it to the output file  
   void writeLine(String* line);
//! Closes the output file   
   void close();
};

#endif
