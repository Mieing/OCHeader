@class UIButton, UIFont, UIView;
@protocol AWEEcomSearchTabBarItemDelegate;

@interface AWEEcomSearchTabBarItem : UIView

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIView *indicatorMaskView;
@property (nonatomic) double indicatorWidth;
@property (nonatomic) double indicatorHeight;
@property (weak, nonatomic) id<AWEEcomSearchTabBarItemDelegate> delegate;
@property (retain, nonatomic) UIFont *normalFont;
@property (retain, nonatomic) UIFont *selectedFont;

+ (id)tabBarItemsWithDataArray:(id)a0 config:(id)a1;

- (void)setSelected:(BOOL)a0 direction:(unsigned long long)a1;
- (double)buttonOriginWidth;
- (void)hideIndicatorWithTransition:(double)a0;
- (void)showIndicatorWithTransition:(double)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)accessibilityElementDidBecomeFocused;

@end
