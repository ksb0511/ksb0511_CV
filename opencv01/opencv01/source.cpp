#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>

#include<cstdio>
using namespace cv;
using namespace std;
int main() {
	Mat img = imread("Lenna.png", IMREAD_COLOR);
	if (img.empty()) {
		printf("이미지를 찾을 수 없음");
		return 1;
	}

	imshow("Display", img);
	waitKey(0);
	return 0;
}