#include <fstream>
#include <iostream>
#include "FileHandling.h"

using namespace std;

FileHandling::FileHandling(string fileName) {
  FileName = fileName;  
}

template<class TEntity>
void SetValue(TEntity entity) {
  // Open file for writing data
  FileWrite.open(FileName, ios::app);
  
  // Write object to the file
  FileWrite.write((char*)&entity, sizeof(entity));
  
  // Close file
  FileWrite.close();
}
