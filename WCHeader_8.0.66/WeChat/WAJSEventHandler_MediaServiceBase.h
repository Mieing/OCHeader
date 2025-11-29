@interface WAJSEventHandler_MediaServiceBase : WAJSEventHandler_BaseEvent

- (void)endWithError:(id)a0 errMsg:(id)a1;
- (void)endWithCallback:(id)a0 errType:(int)a1 errCode:(int)a2 errDesc:(id)a3 ret:(id)a4;
- (BOOL)isGame;
- (void)sendEvent:(id)a0 param:(id)a1;
- (id)formatPath:(id)a0;

@end
