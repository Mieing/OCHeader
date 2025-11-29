@interface WAJSEventHandler_getUserAutoFillData : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)getAutoFillInfo:(id)a0 getAllInfo:(BOOL)a1 clientVersion:(unsigned int)a2;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;

@end
