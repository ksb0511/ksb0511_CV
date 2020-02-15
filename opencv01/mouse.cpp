//#include "opencv2/opencv.hpp"
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
//Mat img;	// 전역변수로 선언
//Point ptOld;	//on_mouse() 함수에서 이전 마우스 이벤트 발생 위치를 저장하기 위한 용도로 pt0ld 변수를 전역변수 형태로 선언
//void on_mouse(int event, int x, int y, int flags, void*);
//
//int main(void)
//{
//	img = imread("lenna.bmp");
//
//	if (img.empty()) {
//		cerr << "Image load failed!" << endl;
//		return -1;
//	}
//
//	namedWindow("img");
//	setMouseCallback("img", on_mouse);
//
//	imshow("img", img);
//	waitKey();
//
//	return 0;
//}
//
//void on_mouse(int event, int x, int y, int flags, void*)
//{
//	switch (event) {
//	case EVENT_LBUTTONDOWN:
//		ptOld = Point(x, y);
//		cout << "EVENT_LBUTTONDOWN: " << x << ", " << y << endl;
//		break;
//	case EVENT_LBUTTONUP:
//		cout << "EVENT_LBUTTONUP: " << x << ", " << y << endl;
//		break;
//	case EVENT_MOUSEMOVE:
//		if (flags & EVENT_FLAG_LBUTTON) {
//			line(img, ptOld, Point(x, y), Scalar(0, 255, 255), 2);
//			imshow("img", img);
//			ptOld = Point(x, y);
//		}
//		break;
//	default:
//		break;
//	}
//}
