/*
 * RegexLibrary.cpp
 *
 *  Created on: 31 oct 2022
 *      Author: iramirezg
 */

#include "RegexLibrary.h"


std::string get_file_content(std::string file_name){
	std::string file_content {};
	std::string temp_file_content {};
	std::ifstream file_reading {};

	file_reading.open(file_name);

	while(std::getline(file_reading, temp_file_content)){
		file_content += temp_file_content;
	}

	return file_content;
}

std::string get_match_content(const std::string& content, std::string str_expresion){
	std::regex regex_expresion {str_expresion};
	std::smatch matches {};
	std::string result {};

	std::regex_search(content, matches, regex_expresion);

	for(std::string match : matches){
		result += '/' + match + '/';
	}

	return result;
}
