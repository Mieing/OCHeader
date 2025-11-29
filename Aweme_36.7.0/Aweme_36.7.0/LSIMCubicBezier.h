@interface LSIMCubicBezier : NSObject

+ (id)pointsWithCtrPnt1:(struct CGPoint { double x0; double x1; })a0 ctrPnt2:(struct CGPoint { double x0; double x1; })a1 count:(unsigned int)a2;
+ (id)easeInOutPointsWithCount:(unsigned int)a0;

@end
