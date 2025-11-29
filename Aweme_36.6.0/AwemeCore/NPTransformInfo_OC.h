@interface NPTransformInfo_OC : NSObject <NSCopying>

@property (nonatomic) double position_x;
@property (nonatomic) double position_y;
@property (nonatomic) double rotation;
@property (nonatomic) double scale_x;
@property (nonatomic) double scale_y;
@property (nonatomic) struct CGPoint { double x; double y; } topLeft;
@property (nonatomic) struct CGPoint { double x; double y; } topRight;
@property (nonatomic) struct CGPoint { double x; double y; } bottomLeft;
@property (nonatomic) struct CGPoint { double x; double y; } bottomRight;

- (struct NPTransformInfo { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; })cppValue;

@end
