@interface MAVImageAnim : NSObject

+ (long long)getAnimationType:(struct CGSize { double x0; double x1; })a0;
+ (long long)getAnimationTypeWithWidth:(double)a0 height:(double)a1;
+ (void)applyAnimation:(id)a0 targetWidth:(int)a1 targetHeight:(int)a2 animateType:(long long)a3;

@end
