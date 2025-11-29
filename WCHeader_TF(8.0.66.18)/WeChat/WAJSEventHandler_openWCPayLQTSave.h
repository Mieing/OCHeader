@class NSString;

@interface WAJSEventHandler_openWCPayLQTSave : WAJSEventHandler_BaseEvent <WCPayJSOpenLQTSaveLogicDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onOk;
- (void)onFail;
- (void)onWCPayJSOpenLQTSaveLogicOk;
- (void)onWCPayJSOpenLQTSaveLogicFail;

@end
