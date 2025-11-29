@interface AWEHotSearchProgressViewConfig : NSObject

+ (struct CGSize { double x0; double x1; })progressViewSizeWithoutPageNumber;
+ (struct CGSize { double x0; double x1; })progressViewSizeWithPageNumber;
+ (double)fiveStateDotDistance;
+ (struct CGSize { double x0; double x1; })fiveStateDotSize;
+ (struct CGSize { double x0; double x1; })fiveStateMiddleDotSize;
+ (int)stateCount;
+ (struct CGSize { double x0; double x1; })dotSizeWithIndex:(long long)a0;
+ (double)sevenStateDotCenterDistance:(long long)a0;
+ (struct CGSize { double x0; double x1; })sevenStateSliderDotSize;
+ (struct CGSize { double x0; double x1; })bigDotSize;
+ (struct CGSize { double x0; double x1; })mediumDotSize;
+ (struct CGSize { double x0; double x1; })smallDotSize;
+ (id)normalColor;
+ (id)selectedColor;

@end
