@class UIImageView;

@interface AWESearchLayoutSwitchButton : UIControl

@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) BOOL isShowDoubleColumnIcon;
@property (nonatomic) long long doubleColumnMode;

+ (double)buttonWidth;

- (void)configUI;
- (void)showWithAnimation:(BOOL)a0;
- (void)disappearWithAnimation:(BOOL)a0;
- (void)configIconViewWithOffset:(double)a0;
- (void)showSwitchDoubleColumnIcon;
- (void)configLayoutSwitchButtonWithTheme:(unsigned long long)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
