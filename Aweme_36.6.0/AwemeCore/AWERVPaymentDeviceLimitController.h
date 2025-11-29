@class UIView;

@interface AWERVPaymentDeviceLimitController : AWEVideoPlayControlBaseController

@property (retain, nonatomic) UIView *paymentDeviceLimitView;

- (void)setHide:(BOOL)a0;
- (void)bindEvents;
- (void)addPaymentDeviceLimitViewIfNeeded;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
