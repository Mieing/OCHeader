@class CJPayCreateOrderResponse;

@interface CJPayAggregateCallClientStyleViewController : CJPayBackStyleBaseViewController

@property (retain, nonatomic) CJPayCreateOrderResponse *createOrderResponse;

- (void)configUserInfoView;
- (void)showErrorAlertWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
