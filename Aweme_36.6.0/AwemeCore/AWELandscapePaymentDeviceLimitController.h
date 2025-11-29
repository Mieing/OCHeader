@class AWELandscapePaymentDeviceLimitView;

@interface AWELandscapePaymentDeviceLimitController : AWELandscapeInteractionBaseController

@property (retain, nonatomic) AWELandscapePaymentDeviceLimitView *deviceLimitView;

- (void)setAppear:(BOOL)a0;
- (void)addDeviceLimitViewIfNeeded;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
