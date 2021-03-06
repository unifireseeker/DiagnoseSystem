#pragma once
#include "ImgSerial.h"

class CImgSerial;

class CSegmentOperat
{
public:
	CSegmentOperat(void);
	~CSegmentOperat(void);
	bool IsodataSeg(Mat &src, int n = 120);						//均值迭代分割
	Mat OstuSeg(Mat src);										//Ostu分割
	Mat EntropySeg(Mat src);									//最大熵分割
	Mat MoMSeg(Mat src);										//矩量保持法
	Mat GetLungArea(Mat src);									//取得肺实质区域
	Mat GetRealLung(Mat src);									//获取肺实质
	Mat RegionGrow(Mat src, Point2i pt, int th = 5);			//区域生长，缺省阈值为5
	Mat GetObjectCenter(Mat src, vector<Point2i>& vcPoint);		//获取两片肺实质的形心
	void RegionGrow3D(CImgSerial &img, Point3i pt,int th=5);	//3维方向区域生长
};

