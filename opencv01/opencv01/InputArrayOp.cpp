//#include "opencv2/opencv.hpp"
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
//void InputArrayOp();
//void printMat(InputArray _mat);
//
//int main(void)
//{
//	InputArrayOp();
//
//	return 0;
//}
//
//void InputArrayOp()
//{
//	uchar data1[] = { 1, 2, 3, 4, 5, 6 };	// uchar 타입의 배열 data1
//	Mat mat1(2, 3, CV_8UC1, data1);			// 2x3, uchar 타입의 data1 행렬
//	printMat(mat1);
//
//	vector<float> vec1 = { 1.2f, 3.4f, -2.1f };	// float 타입의 벡터 vec1
//	printMat(vec1);
//}
//
//void printMat(InputArray _mat)	// 함수의 인자로 전달받는 타입이 InputArray
//{
//	Mat mat = _mat.getMat();	// InputArray 타입의 _mat객체로부터 Mat객체 mat 생성
//	cout << mat << endl;
//}
