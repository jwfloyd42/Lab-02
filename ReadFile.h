#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

/*Class to read a file which will be used to create a new file in WriteFile
 *
 * The ReadFile class accepts a character array which is the file name
 * The constructor then reads the input file based on the given file name
 * This data is then used later in the WriteFile.
 */
class ReadFile
{
   private:
   ifstream input_file;
   bool _eof;
   bool closed;
   
   public:
   ReadFile(const char* file_name);
   ~ReadFile();
   String* readLine();
   bool eof();
   void close();
};

#endif
