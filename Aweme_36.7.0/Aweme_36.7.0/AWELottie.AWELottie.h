@interface AWELottie.AWELottie : NSObject

+ (id)animationNamed:(id)a0 bundle:(id)a1;
+ (id)animationNamed:(id)a0 bundleName:(id)a1;
+ (id)animationFrom:(id)a0 bundle:(id)a1;
+ (id)animationWith:(id)a0;
+ (id)swiftAnimationNamed:(id)a0 bundleName:(id)a1;
+ (id)swiftAnimationNamed:(id)a0 bundleName:(id)a1 coreAnimationRender:(BOOL)a2;
+ (id)swiftAnimationFrom:(id)a0 bundle:(id)a1;
+ (id)makeAnimationViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)animationFrom:(id)a0;
+ (id)commonInit;
+ (id)animationNamed:(id)a0;

- (id)init;

@end
