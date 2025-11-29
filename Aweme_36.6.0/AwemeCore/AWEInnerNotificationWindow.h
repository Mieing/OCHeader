@interface AWEInnerNotificationWindow : UIWindow

@property (copy, nonatomic) id /* block */ customPointInsideTest;

+ (void)interfaceOrientationAdaptTo:(long long)a0;
+ (Class)aAWEPadBizUIAdapterClass;
+ (void)initialize;

- (BOOL)_canBecomeKeyWindow;
- (BOOL)_canAffectStatusBarAppearance;
- (void)clearBackgroundRecursivelyInView:(id)a0;
- (void)setLabelsColorWhiteInView:(id)a0;
- (void)applyBlurEffectToView:(id)a0;
- (void)setupBlurEffectForNotificationView;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)aAWEPadBizUIAdapter;
- (BOOL)shouldAffectStatusBarAppearance;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)canBecomeKeyWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
