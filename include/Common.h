/////////////////////////////////////////////////////////////////////////////
// Name:        Common.h
// Purpose:     Common namespace
// Author:      Balázs Tóth
// Modified by:
// Created:     10/07/2016
// Copyright:   (c) Common utils
// Licence:     GPL
/////////////////////////////////////////////////////////////////////////////

#ifndef _COMMON_H_
#define _COMMON_H_

#include <vector>
#include <string>
#include <iostream>
#include <sstream>

namespace Common {
	std::string to_string(float const& number);
	std::string to_string(size_t const& number);
	std::vector<int> find_word(std::string const& text, std::string const& word);
}

#endif //_COMMON_H_