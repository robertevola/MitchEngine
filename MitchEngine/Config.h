// 2015 Mitchell Andrews
#pragma once
#include <fstream>
#include <json/json.h>
#include <string>

namespace ma {
	class Config {
	public:
		Config(const char* file);
		~Config();
		std::string GetValue(std::string value);
		Json::Value Root;
	private:
		Json::Reader Reader;
	};
}