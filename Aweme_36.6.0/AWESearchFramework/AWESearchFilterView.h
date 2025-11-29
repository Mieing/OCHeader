@class UIView, CAGradientLayer, AWESearchFilterButton;

@interface AWESearchFilterView : UIView

@property (retain, nonatomic) AWESearchFilterButton *button;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) CAGradientLayer *graditentLayer;
@property (nonatomic) BOOL isDisappeared;

+ (double)filterButtonWidth;
+ (double)filterGradientWidth;

- (void)showWithAnimation:(BOOL)a0;
- (void)disappearWithAnimation:(BOOL)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)init;
- (id)accessibilityElements;

@end
