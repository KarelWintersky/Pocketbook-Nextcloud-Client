//------------------------------------------------------------------
// fileBrowser.h
//
// Author:           JuanJakobo
// Date:             29.07.2022
// Description: Interface to the filesystem fo the PB
//
//-------------------------------------------------------------------

#ifndef FILEBROWSER
#define FILEBROWSER

#include <memory>
#include <string>
#include <vector>

#include "fileHandler.h"
#include "fileModel.h"

class FileBrowser
{
  public:
    static std::vector<FileItem> getFileStructure(const std::string &path, const bool includeFiles,
                                                  const bool includeHeader);

  private:
    FileBrowser(){};

    static std::shared_ptr<FileHandler> _fileHandler;
};
#endif
