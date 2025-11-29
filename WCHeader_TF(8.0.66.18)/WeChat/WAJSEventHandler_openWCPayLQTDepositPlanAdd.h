@class NSString;

@interface WAJSEventHandler_openWCPayLQTDepositPlanAdd : WAJSEventHandler_BaseEvent <WCPayJSOpenLQTDepositPlanAddLogicDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onOk;
- (void)onFail;
- (void)onWCPayJSOpenLQTDepositPlanAddLogicOk;
- (void)onWCPayJSOpenLQTDepositPlanAddLogicFail;

@end
