#include "Common.h"

namespace Common {
	std::string to_string(float const& number) {
		std::ostringstream buffer;
	    buffer << number;
	    return std::string{buffer.str()}; 
	}
	std::string to_string(size_t const& number) {
		std::ostringstream buffer;
	    buffer << number;
	    return std::string{buffer.str()}; 
	}
	std::vector<int> find_word(std::string const& text, std::string const& word) {
		std::vector<int> positions;
		int pos = 0;
		while(pos<text.size()-word.size()) {
			pos = text.find(word, pos);
			positions.push_back(pos);
			if(pos==-1) break;
			pos++;
		}
		return positions;
	}
}