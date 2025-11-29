@class NSDictionary, NSString;

@interface WAJSEventHandler_requestPaymentToBank : WAJSEventHandler_BaseEvent <WCPayCheckoutCounterLogicDelegate>

@property (copy, nonatomic) NSDictionary *param;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (id)getWCPayCheckoutParam;
- (void)onWCPayCheckoutSuccess:(id)a0;
- (void)onWCPayCheckoutFail:(id)a0 dicResult:(id)a1;
- (void).cxx_destruct;

@end
