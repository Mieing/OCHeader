@class UITouch;

@interface WCVideoCropImageSliderTouch : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (nonatomic) double time;
@property (retain, nonatomic) UITouch *touch;

- (void).cxx_destruct;

@end
