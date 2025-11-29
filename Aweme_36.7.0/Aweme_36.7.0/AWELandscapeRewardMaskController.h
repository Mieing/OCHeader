@class AWELandscapePaymentMaskView;

@interface AWELandscapeRewardMaskController : AWELandscapeInteractionBaseController

@property (retain, nonatomic) AWELandscapePaymentMaskView *paymentMaskView;

- (id)trackCommonParams;
- (BOOL)shouldShowMaskView;
- (void)addPaymentMaskViewIfNeeded;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
