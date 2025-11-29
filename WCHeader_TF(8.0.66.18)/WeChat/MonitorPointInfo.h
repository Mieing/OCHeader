@interface MonitorPointInfo : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } normalizedCoordinate;
@property (nonatomic) struct { int r; int g; int b; double a; } argbColor;

@end
