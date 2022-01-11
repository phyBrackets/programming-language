#ifndef PHYLANG_TYPES_LITERAL_H 
#define PHYLANG_TYPES_LITERAL_H 
#pragma once 

#include <optional>
#include <string>
#include <variant> 

using Literal = std::variant<std::string, double>;
using OptionalLiteral = std::optional<Literal>;

auto getLiteralString(const Literal& value)->std::string;

auto makeOptionalLiteral(double dVal)->OptionalLiteral;

auto makeOptionalLiteral(const std::string& lexeme)->OptionalLiteral;

#endif