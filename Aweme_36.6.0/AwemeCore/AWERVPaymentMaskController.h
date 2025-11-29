@class UIView;

@interface AWERVPaymentMaskController : AWEVideoPlayControlBaseController

@property (retain, nonatomic) UIView *paymentMaskView;

- (void)setHide:(BOOL)a0;
- (void)bindEvents;
- (void)addPaymentMaskViewIfNeeded;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
