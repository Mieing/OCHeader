@class NSString;

@interface AWEAdColorLabUtil : NSObject <AWEAdColorLabUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { double x0; double x1; double x2; })convertRGBToLABWithColor:(id)a0;
+ (id)imageFromCVPixelBufferRef:(struct __CVBuffer { } *)a0;
+ (double)deltaColorOfCIEDE2000BetweenColor1:(id)a0 color2:(id)a1;
+ (double)deltaColorOfCIEDE2000BetweenLab1:(struct { double x0; double x1; double x2; })a0 lab2:(struct { double x0; double x1; double x2; })a1;
+ (double)weightedAverageBrightnessWithColor:(id)a0;
+ (id)colorFromCVPixelBufferRef:(struct __CVBuffer { } *)a0 startY:(double)a1 endY:(double)a2;


@end
