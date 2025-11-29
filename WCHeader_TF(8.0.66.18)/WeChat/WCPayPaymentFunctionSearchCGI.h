@protocol WCPayPaymentFunctionSearchCGIDelegate;

@interface WCPayPaymentFunctionSearchCGI : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayPaymentFunctionSearchCGIDelegate> cgiDelegate;

- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
