@class LOTAnimationView, UILabel;

@interface AWEPlayletCentralizationSwipeDownGuideView : UIView

@property (retain, nonatomic) LOTAnimationView *swipeDownLottieView;
@property (retain, nonatomic) UILabel *textLabel;

- (void)playGuideAnimation;
- (void)stopGuideAnimation;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
