#include <iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	cv::Mat src_Mat = cv::imread("D:\\Files\\2.jpg", 0);//读取图片，转为灰度图
	cv::Mat thres_Mat;//定义Mat
	cv::Mat adap_Mat;
	threshold(src_Mat, thres_Mat, 100, 255, THRESH_BINARY);//二值化图像
	adaptiveThreshold(src_Mat, adap_Mat, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);//区域二值化图像
	cv::imshow("binary", thres_Mat);//显示二值化图像
	cv::imshow("adaptive_binary", adap_Mat);//显示区域二值化图像
	waitKey(0);
}