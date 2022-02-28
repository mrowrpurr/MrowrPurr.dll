#pragma once

#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

namespace PapyrusFileSystem {
        
    std::vector<std::string_view> List(RE::StaticFunctionTag*, std::string_view path) {
        std::vector<std::string_view> response = { "Hello", "World" };
        return response;
    };

    bool BIND(RE::BSScript::IVirtualMachine* vm) {
        static constexpr auto className = "FileSystem";
        vm->RegisterFunction("List", className, List);
        return true;
    };
}