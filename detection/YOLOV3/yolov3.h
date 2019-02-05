#include <opencv2/opencv.hpp>
#include <opencv2/dnn.hpp>

#include <vector>
#include <string>

void InitNet(cv::dnn::Net net, const std::string& cfgfile, const std::string& modelfile, const std::string& classfile);

void ProcessFrame(const cv::dnn::Net& net, cv::Mat& img);

std::vector<std::string> GetOutputsName(const cv::dnn::Net& net);

void PostProcess(cv::Mat& img, const std::vector<cv::Mat>& outs);

void DrawPredict(cv::Mat& img, int classId, float conf, int left, int top, int right, int bottom);
