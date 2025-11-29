@class LOTAnimationView;

@interface AWENearbyTapEnterDetailPageGuideView : UIView

@property (retain, nonatomic) LOTAnimationView *lottieView;

+ (void)markDisplayed;
+ (BOOL)hasAlertInWindow;
+ (Class)layerClass;
+ (BOOL)isDisplayed;

- (void)__setupUI;
- (void)beginAnimationForVisiableRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (void)removeViewWithAnimate:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
