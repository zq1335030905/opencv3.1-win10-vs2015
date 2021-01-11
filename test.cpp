
#include<opencv2/features2d/features2d.hpp>
#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/xfeatures2d/nonfree.hpp>
#include<opencv2/core/core.hpp>

#include<iostream>
using namespace std;
using namespace cv;
using namespace cv::xfeatures2d;
int main()
{
	Mat srcImage1 = imread("img\\1.jpg", 1);
	Mat srcImage2 = imread("img\\2.jpg", 1);
	if (!srcImage1.data || !srcImage2.data)
	{
		cout << "读取图片出错" << endl;
		return false;
	}

	imshow("原始图1", srcImage1);
	imshow("原始图2", srcImage2);

	int minHessian = 100;
	Ptr<SurfFeatureDetector> detector = SurfFeatureDetector::create(minHessian);

	vector<cv::KeyPoint> key_points_1, key_points_2;

	Mat dstImage1, dstImage2;
	detector->detectAndCompute(srcImage1, Mat(), key_points_1, dstImage1);
	detector->detectAndCompute(srcImage2, Mat(), key_points_2, dstImage2);//可以分成detect和compute

	Mat img_keypoints_1, img_keypoints_2;
	drawKeypoints(srcImage1, key_points_1, img_keypoints_1, Scalar::all(-1), DrawMatchesFlags::DEFAULT);
	drawKeypoints(srcImage2, key_points_2, img_keypoints_2, Scalar::all(-1), DrawMatchesFlags::DEFAULT);

	Ptr<DescriptorMatcher> matcher = DescriptorMatcher::create("FlannBased");
	vector<DMatch>mach;

	matcher->match(dstImage1, dstImage2, mach);
	double Max_dist = 0;
	double Min_dist = 100;
	for (int i = 0; i < dstImage1.rows; i++)
	{
		double dist = mach[i].distance;
		if (dist < Min_dist)Min_dist = dist;
		if (dist > Max_dist)Max_dist = dist;
	}
	cout << "最短距离" << Min_dist << endl;
	cout << "最长距离" << Max_dist << endl;

	vector<DMatch>goodmaches;
	for (int i = 0; i < dstImage1.rows; i++)
	{
		if (mach[i].distance < 2 * Min_dist)
			goodmaches.push_back(mach[i]);
	}
	Mat img_maches;
	drawMatches(srcImage1, key_points_1, srcImage2, key_points_2, goodmaches, img_maches);

	for (int i = 0; i < goodmaches.size(); i++)
	{
		cout << "符合条件的匹配：" << goodmaches[i].queryIdx << "--" << goodmaches[i].trainIdx << endl;
	}
	imshow("效果图1", img_keypoints_1);
	imshow("效果图2", img_keypoints_2);
	imshow("匹配效果", img_maches);

	waitKey(0);
	return 0;
}
