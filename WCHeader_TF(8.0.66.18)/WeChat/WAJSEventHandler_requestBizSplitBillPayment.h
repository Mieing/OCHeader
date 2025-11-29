@class NSString;

@interface WAJSEventHandler_requestBizSplitBillPayment : WAJSEventHandler_BaseEvent <WCPayJSLaunchGroupPayPfLogicDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onOK;
- (void)onFail;
- (void)onLaunchGroupPayPfOk;
- (void)onLaunchGroupPayPfFail;

@end
