@interface AnimationHelper : NSObject

+ (id)animationRockRotateBy:(float)a0 andDuration:(float)a1;
+ (id)animationRockScaleBy:(float)a0 andDuration:(float)a1;
+ (id)animationRockAlphaBy:(float)a0 andDuration:(float)a1;
+ (id)animationRotateBy:(float)a0 andDuration:(float)a1;
+ (id)animationScaleXFrom:(float)a0 To:(float)a1 byDuration:(float)a2;
+ (id)animationScaleYFrom:(float)a0 To:(float)a1 byDuration:(float)a2;
+ (id)animationScaleFrom:(float)a0 To:(float)a1 byDuration:(float)a2;
+ (id)animationAlphaFrom:(float)a0 To:(float)a1 byDuration:(float)a2;
+ (id)animationPositionFrom:(struct CGPoint { double x0; double x1; })a0 To:(struct CGPoint { double x0; double x1; })a1 byDuration:(float)a2;
+ (id)animationBoundsFrom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 To:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 byDuration:(float)a2;
+ (id)animationPathFrom:(struct CGPoint { double x0; double x1; })a0 To:(struct CGPoint { double x0; double x1; })a1 byDuration:(float)a2;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })animationRotateTransformForOrientaion:(long long)a0;

@end
