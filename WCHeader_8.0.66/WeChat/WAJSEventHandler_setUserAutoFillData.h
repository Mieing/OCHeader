@interface WAJSEventHandler_setUserAutoFillData : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)setAutoFillInfo:(id)a0 clientVersion:(unsigned int)a1;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;

@end
