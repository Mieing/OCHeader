@class UIView;

@interface MMUINavigationBar : UINavigationBar

@property (retain, nonatomic) UIView *effectSubview;
@property (nonatomic) long long lastUpdateStyle;
@property (nonatomic) BOOL disable;
@property (nonatomic) BOOL customBlurEffectHidden;
@property (copy, nonatomic) id /* block */ onLayoutSubviews;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configCustomBlurEffect;
- (void)setItems:(id)a0;
- (void)setItems:(id)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)checkHookContentView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustContentViewToFitMargin;
- (void)adjustBlurEffect;
- (id)findBlurEffectView:(id)a0;
- (void)setTranslucent:(BOOL)a0;
- (void)setBarStyle:(long long)a0;
- (void)setAlpha:(double)a0;
- (id)getTopViewController;
- (BOOL)isTransparentNavBar;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)overrideUserInterfaceStyle;
- (void)traitCollectionDidChange:(id)a0;
- (id)navigationContentView;
- (id)currentViewController;
- (void).cxx_destruct;

@end
