@class NSString;

@interface WAJSEventHandler_requestOfflineUserBindQuery : WAJSEventHandler_BaseEvent <WCPayJSRequestOfflineUserBindqueryLogicDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onHandleJSRequestSucc;
- (void)onHandleJSRequestFail;

@end
