
#include <iostream>
#include <fstream>
#include <regex>
#include "RegexLibrary.h"

int main() {

	std::string regex_input {};
	std::string file_name {};
	std::string file_content {};

	std::string result {};


	//Introducimos el nombre del archivo
	std::cout << "Introduzca el archivo: \n";
	std::cin >> file_name;

	//Introducimos la expresión regular
	std::cout << "Introduzca la expresión regular con la que desea buscar informacion: \n";
	std::cin >> regex_input;


	//Obtenemos la información del archivo
	file_content = get_file_content(file_name);

	//Obtenemos los matches encontrados en el texto
	result = get_match_content(file_content, regex_input);


	//Mostramos el resultado
	std::cout << result << std::endl;

	return 0;
}
