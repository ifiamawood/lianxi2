// lianxi2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<opencv.hpp>

using namespace cv;

int main()
{
	cv::Mat srcMat = imread("D://1.jpd", 0);
	imshow("src", srcMat);

}

