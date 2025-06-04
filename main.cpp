#include <iostream>
#include <filesystem>
#include <map>

namespace fs = std::filesystem;

std::string getExtension(const fs::path& file) {
    return file.extension().string();
}

int main() {
    std::string path;
    std::cout << "Enter the folder path to organize: ";
    std::getline(std::cin, path);

    if (!fs::exists(path) || !fs::is_directory(path)) {
        std::cout << "Invalid directory!" << std::endl;
        return 1;
    }

    for (const auto& entry : fs::directory_iterator(path)) {
        if (fs::is_regular_file(entry.status())) {
            std::string ext = getExtension(entry.path());

            if (ext.empty()) ext = "unknown";

            fs::path targetDir = path + "/" + ext.substr(1); // e.g. "txt" instead of ".txt"

            if (!fs::exists(targetDir)) {
                fs::create_directory(targetDir);
            }

            fs::path targetPath = targetDir / entry.path().filename();
            fs::rename(entry.path(), targetPath);

            std::cout << "Moved: " << entry.path().filename() << " --> " << targetDir << std::endl;
        }
    }

    std::cout << "Organizing complete!" << std::endl;
    return 0;
}
