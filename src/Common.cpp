/*
    Copyright 2016-2017 Balazs Toth
    This file is part of CommonUtils.

    CommonUtils is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    CommonUtils is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with CommonUtils.  If not, see <http://www.gnu.org/licenses/>.

    For more information please visit: https://bitbucket.org/CommonUtilsproject/
*/

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
		// std::vector<int> positions;
		// int pos = 0;
		// while(pos<text.size()-word.size()) {
		// 	pos = text.find(word, pos);
		// 	positions.push_back(pos);
		// 	if(pos==-1) break;
		// 	pos++;
		// }
		// return positions;
		std::vector<int> start;
		for(int i=0; i<text.size(); i++) {
			bool match = true;
			for(int j=0; j<word.size(); j++) {
				if(text[i+j]!=word[j] || i+j>=text.size()) {
					match = false;
					break;
				}
			}
			if(match){
				start.push_back(i);
			}
		}
		return start;
	}
}