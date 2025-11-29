@interface ToygerDocConfig : NSObject

@property (nonatomic) int thickness;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) float boundaryThreshold;
@property (nonatomic) int stackTime;

@end
