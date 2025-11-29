@interface AWEEcomSearchAddCartAnimator : NSObject

+ (id)createBasicAnimationWithType:(long long)a0 from:(double)a1 to:(double)a2 duration:(double)a3;
+ (struct CGPoint { double x0; double x1; })calculateControlPointWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
+ (id)createBezierAnimationWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 controlPoint:(struct CGPoint { double x0; double x1; })a2 duration:(double)a3;
+ (void)addCartAnimationWithContainerView:(id)a0 animationDelegate:(id)a1 animationLayer:(id)a2 startPoint:(struct CGPoint { double x0; double x1; })a3 endPoint:(struct CGPoint { double x0; double x1; })a4;

@end
