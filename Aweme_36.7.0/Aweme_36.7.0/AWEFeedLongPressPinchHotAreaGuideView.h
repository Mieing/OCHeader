@class LOTAnimationView, UILabel;

@interface AWEFeedLongPressPinchHotAreaGuideView : UIView

@property (retain, nonatomic) LOTAnimationView *swipeDownLottieView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)showGuideOnView:(id)a0;
- (void)hideGuideIfNeed;
- (void)resetGuideView;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
