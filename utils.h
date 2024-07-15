#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>

std::string formatSize(double size);
int progressBar(void *ptr, double TotalToDownload, double NowDownloaded, double TotalToUpload, double NowUploaded);
void writeExtractedFilesList(const std::string &listPath, const std::vector<std::string> &extractedFiles, std::string packageName, std::string packageVersion);
bool isPackageInstalled(const std::string &listPath, const std::string &packageName, const std::string &packageVersion);
bool isPackageInstalled(const std::string &listPath, const std::string &packageName);
std::vector<std::string> getPackageFiles(const std::string &listPath, std::string packageName);

#endif // UTILS_H