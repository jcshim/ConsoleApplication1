#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main(){
	Mat img_color;
	VideoCapture cap(0);
	if (!cap.isOpened()) {
		cerr << "에러 - 카메라를 열 수 없습니다.\n";
		return -1;
	}
	while (1){
		cap.read(img_color);
		if (img_color.empty()) {
			cerr << "빈 영상이 캡쳐되었습니다.\n";
			break;
		}
		imshow("Color", img_color);
		if (waitKey(25) >= 0)	break;
	}
	return 0;
}