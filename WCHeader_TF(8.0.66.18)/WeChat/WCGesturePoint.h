@interface WCGesturePoint : MMObject

@property (nonatomic) double x;
@property (nonatomic) double y;

+ (id)gesturePointWithCGPoint:(struct CGPoint { double x0; double x1; })a0;

- (double)distanceTo:(id)a0;

@end
