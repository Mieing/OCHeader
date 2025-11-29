@class LOTAnimationView, UILabel;

@interface AWEFeedLongPressLockSpeedGuideView : UIView

@property (retain, nonatomic) LOTAnimationView *swipeDownLottieView;
@property (retain, nonatomic) UILabel *textLabel;

- (void)showGuideOnView:(id)a0;
- (void)hideGuideIfNeed;
- (void)resetGuideView;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
