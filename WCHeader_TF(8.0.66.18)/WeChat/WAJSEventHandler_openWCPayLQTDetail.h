@class NSString;

@interface WAJSEventHandler_openWCPayLQTDetail : WAJSEventHandler_BaseEvent <WCPayJSOpenLQTDetailLogicDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onOk;
- (void)onFail;
- (void)onWCPayJSOpenLQTDetailLogicOk;
- (void)onWCPayJSOpenLQTDetailLogicFail;

@end
