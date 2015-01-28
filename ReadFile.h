#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

/*!Class to read an input file which will be used to create a new file in WriteFile
 * The ReadFile class accepts a character array which is the file name
 * The constructor then reads the input file based on the given file name
 * The destructor calls the close procedure to close the file once it is done reading
 * This data is then used later in the WriteFile.
 */
class ReadFile
{
   private:
   ifstream input_file;
   bool _eof;
   bool closed;
   
   public:
//! The constructor accepts a character array as the file name and then uses it to open the file
   ReadFile(const char* file_name);
//! The destructor uses the close procedure to then close the file once the user is done with it
   ~ReadFile();
//! This procedure reads in each line from the input file and stores them as Strings
   String* readLine();
//! This procedure determines whether or not you are at the end of the input file to stop reading
   bool eof();
//! This closes the input file
   void close();
};

#endif
