// lianxi2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<opencv.hpp>

using namespace cv;

int main()
{
	cv::Mat srcMat = imread("D://1.jpd", 0);
	imshow("src", srcMat);

}

