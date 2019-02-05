#include <fstream>
#include "yolov3.h"

float confThreshold = 0.5; // 
float nmsThreshold = 0.4;
int width = 416;
int height = 416;

std::vector<std::string> classes;

void InitNet(cv::dnn::Net net, const std::string& cfgfile, const std::string& modelfile, const std::string& classfile){
    // get classes name, coco.names
    std::ifstream ifs(classfile.c_str());
    std::string line;
    while(getline(ifs, line)){
        classes.push_back(line);
    }

/*
    enum cv::dnn::Backend { 
    	cv::dnn::DNN_BACKEND_DEFAULT, 
  		cv::dnn::DNN_BACKEND_HALIDE, 
  		cv::dnn::DNN_BACKEND_INFERENCE_ENGINE, 
  		cv::dnn::DNN_BACKEND_OPENCV 
	}
	
    enum cv::dnn::Target { 
    	cv::dnn::DNN_TARGET_CPU, 
  		cv::dnn::DNN_TARGET_OPENCL, 
  		cv::dnn::DNN_TARGET_OPENCL_FP16, 
  		cv::dnn::DNN_TARGET_MYRIAD, 
  		cv::dnn::DNN_TARGET_FPGA 
	}
*/



	net = cv::dnn::readNetFromDarknet(cfgfile.c_str(), modelfile.c_str());
    net.setPreferableBackend(2); //cv::dnn::DNN_BACKEND_OPENCV);
    net.setPreferableTarget(cv::dnn::DNN_TARGET_CPU);
}

void ProcessFrame(const cv::dnn::Net& net, cv::Mat& img){

}

std::vector<std::string> GetOutputsName(const cv::dnn::Net& net){

}

void PostProcess(cv::Mat& img, const std::vector<cv::Mat>& outs){

}


void DrawPredict(cv::Mat& img, int classId, float conf, int left, int top, int right, int bottom){

}
