@class DUXButton, AWEFeedGameCardDoubleButtonComponentConfig, AWEFeedGameCustomAnimationView;

@interface AWEFeedGameCardDoubleButtonComponent : UIView

@property (retain, nonatomic) DUXButton *leftButton;
@property (retain, nonatomic) DUXButton *rightButton;
@property (retain, nonatomic) AWEFeedGameCustomAnimationView *animationButton;
@property (retain, nonatomic) AWEFeedGameCardDoubleButtonComponentConfig *componentConfig;

- (id)getDefaultButton;
- (void)updateButton:(id)a0 withConfig:(id)a1;
- (void)addCouponTagWithButton:(id)a0 withCouponData:(id)a1;
- (void)addAnimationButtonWithAmount:(long long)a0;
- (void)updateRightButtonWithCouponData:(id)a0 promotionStyle:(long long)a1 goldCoinNum:(long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
