@interface AWEIMCollapsibleBannerCustomizedAnimationUtilty : NSObject

+ (id)setupMovingAnimationForView:(id)a0 targetPotion:(struct CGPoint { double x0; double x1; })a1 duration:(double)a2 timingFunction:(id)a3;
+ (id)setupExpendingAnimationForView:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2 timingFunction:(id)a3 delegate:(id)a4;
+ (id)setupOpacityAnimationForView:(id)a0 targetOpacity:(double)a1 duration:(double)a2 timingFunction:(id)a3;
+ (id)setupBackgroundAnimationForView:(id)a0 targetColor:(id)a1 duration:(double)a2 timingFunction:(id)a3;

@end
