@interface QMUAnnotationAnimator : NSObject

+ (void)translateWithAnnotationView:(id)a0 locations:(id)a1 duration:(double)a2 rotateEnabled:(BOOL)a3;
+ (void)translateWithAnnotationView:(id)a0 rotationView:(id)a1 locations:(id)a2 duration:(double)a3 rotateEnabled:(BOOL)a4 distanceFilter:(double)a5 translationCallback:(id /* block */)a6;
+ (void)setTranslation:(id)a0 withPoint:(int)a1 andRatio:(float)a2;
+ (void)setAnimation:(id)a0 withLeftTime:(double)a1;
+ (void)setTranslation:(id)a0 withPoint:(int)a1 andRatio:(float)a2 andLeftTime:(double)a3;

@end
