@interface IESECPdpAddCartAnimationHelper : NSObject

+ (struct CGPoint { double x0; double x1; })calculateControlPointWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
+ (id)createBezierAnimationWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 controlPoint:(struct CGPoint { double x0; double x1; })a2 duration:(double)a3;
+ (void)configureAnimationLayer:(id)a0 atCenter:(struct CGPoint { double x0; double x1; })a1;

@end
