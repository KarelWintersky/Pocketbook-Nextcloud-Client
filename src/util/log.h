#pragma once
//------------------------------------------------------------------
// log.h
//
// Author:           JuanJakobo
// Date:             05.08.2020
// Description:      Deals with log entries
//-------------------------------------------------------------------

#include <string>

#include "inkview.h"

class Log
{
  public:
    // use templates
    /**
     * Writes a error log entry to the log file
     *
     * @param text that shall be written to the log
     */
    static void writeErrorLog(const std::string &text);

    /**
     * Writes a info log entry to the log file
     *
     * @param text that shall be written to the log
     */
    static void writeInfoLog(const std::string &text);

  private:
    Log()
    {
    }

    /**
     * Writes a log entry to the log file
     *
     * @param text that shall be written to the log
     */
    static void writeLog(const std::string &text);
};
