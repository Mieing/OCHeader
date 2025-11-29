@interface AFDColorRingTransitionUtils : NSObject

+ (void)notifyTransitionStart:(id)a0 isMagnify:(BOOL)a1;
+ (double)calculateDynamicScaleForTransitionStartView:(id)a0 inContainer:(id)a1;
+ (id)createMaskViewInView:(id)a0;
+ (void)notifyTransitionFinish:(id)a0 isMagnify:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })calculateCenterPointFromView:(id)a0 inContainer:(id)a1 defaultRatio:(double)a2;
+ (void)cleanupShrinkTransitionWithSnapshot:(id)a0 maskView:(id)a1 fromView:(id)a2 toView:(id)a3 fromCP:(id)a4 toCP:(id)a5 transitionClass:(Class)a6 context:(id)a7 completion:(id /* block */)a8;
+ (id)createShrinkAnimatorsWithDuration:(double)a0 container:(id)a1 content:(id)a2 endCenter:(struct CGPoint { double x0; double x1; })a3 sEnd:(double)a4 maskView:(id)a5 completion:(id /* block */)a6;
+ (id)createDefaultTimingParameters;
+ (double)calculateScaleForPercentage:(double)a0 dynamicInitialScale:(double)a1;

@end
