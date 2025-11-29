@class NSString, WCPayPassKitFacade;

@interface WAJSEventHandler_addPaymentPassFinish : WAJSEventHandler_BaseEvent <WCPayPassKitFacadeDelegate>

@property (retain, nonatomic) WCPayPassKitFacade *passKitFacade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onPaymentPassViewControllerFinishPayment:(id)a0;
- (void).cxx_destruct;

@end
