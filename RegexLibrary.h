/*
 * RegexLibrary.h
 *
 *  Created on: 31 oct 2022
 *      Author: iramirezg
 */

#ifndef REGEXLIBRARY_H_
#define REGEXLIBRARY_H_

#include <iostream>
#include <regex>
#include <fstream>

std::string get_file_content(std::string file_name);
std::string get_match_content(const std::string& content, std::string str_expresion);




#endif /* REGEXLIBRARY_H_ */
