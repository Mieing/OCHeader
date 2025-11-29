@class UIImageView, UILabel, UIButton;

@interface WCCanvasBottomSwipeComponent : WCCanvasComponent

@property (retain, nonatomic) UIImageView *swipeUpIcon;
@property (retain, nonatomic) UILabel *swipeUpText;
@property (retain, nonatomic) UIButton *hotZone;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)layoutSubviews;
- (void)initViews;
- (void)initSwipeUpView;
- (void)beginSwipeUpAnimation;
- (id)generateKeyframeAnimationWithKeyPath:(id)a0 duration:(double)a1;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)componentAppearFactorChagneInMainScreen;
- (BOOL)shouldForbidDelegateShowFloatActionBtn;
- (BOOL)shouldAllowBottomSwipeAction;
- (void)didBottomSwipeActionComplete;
- (void)jumpToUrl:(id)a0;
- (void).cxx_destruct;

@end
