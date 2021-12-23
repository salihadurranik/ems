#pragma once

template <class TEntity>
class FileHandling
{
  private:
    TEntity PObject;
    string FileName;
  
  public:
    FileHandling(string fileName);
    void SetValue(TEntity entity);
    TEntity GetValue();
};

