@class NSString;

@interface WAJSEventHandler_openWCPayCardList : WAJSEventHandler_BaseEvent <WCPayJumpPayCardListLogicDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onWCPayJumpPayCardListLogicBack;
- (void)onWCPayJumpPayCardListLogicFail;

@end
