@interface MAMapArrowOverlayOptions : NSObject

@property (nonatomic) int topColor;
@property (nonatomic) int sideColor;
@property (nonatomic) float width;
@property (nonatomic) struct MAMapPoint { double x0; double x1; } *points;
@property (nonatomic) unsigned long long pointCount;

@end
