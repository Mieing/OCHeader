@class NSString;

@interface WAJSEventHandler_openHKOfflinePayView : WAJSEventHandler_BaseEvent <WCPayJSOpenHKOfflinePayLogicDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onOpenHKOfflinePaySucc;
- (void)onOpenHKOfflinePayFail;

@end
