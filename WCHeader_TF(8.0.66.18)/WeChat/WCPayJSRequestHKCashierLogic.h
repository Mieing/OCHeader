@protocol WCPayJSRequestHKCashierLogicDelegate;

@interface WCPayJSRequestHKCashierLogic : WCPayJSAuthBaseLogic

@property (weak, nonatomic) id<WCPayJSRequestHKCashierLogicDelegate> delegate;

- (id)initWithJSEvent:(id)a0 param:(id)a1 delegate:(id)a2;
- (void)authOk;
- (void)authFail;
- (void).cxx_destruct;

@end
