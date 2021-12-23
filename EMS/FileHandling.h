#pragma once

template <class TEntity>
class FileHandling
{
  private:
    TEntity PObject;
  
  public:
    FileHandling();
    void SetValue(TEntity entity);
    TEntity GetValue();
};

