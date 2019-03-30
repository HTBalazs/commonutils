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

#ifndef _COMMON_H_
#define _COMMON_H_

#include <vector>
#include <string>
#include <iostream>
#include <sstream>

namespace Common {
    template <typename T> std::string to_string(T const& number) {
        std::ostringstream buffer;
        buffer << number;
        return std::string{buffer.str()}; 
    }
    std::vector<int> find_word(std::string const& text, std::string const& word);
    template <typename T> void delete_indices(std::vector<T>& data, std::vector<size_t> const& delete_indices) {
        std::vector<bool> marked_elements(data.size(), false);
        std::vector<T> temp_buffer;
        temp_buffer.reserve(data.size()-delete_indices.size());
        for(auto const& it:delete_indices) {
            marked_elements[it] = true;
        }
        for(size_t i=0; i<data.size(); i++) {
            if(!marked_elements[i]) {
                temp_buffer.push_back(data[i]);
            }
        }
        data = temp_buffer;
    }
}

#endif //_COMMON_H_