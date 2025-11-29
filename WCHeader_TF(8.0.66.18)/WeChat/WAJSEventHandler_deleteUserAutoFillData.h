@interface WAJSEventHandler_deleteUserAutoFillData : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)deleteAutoFillInfo:(long long)a0 groupKey:(id)a1 clientVersion:(unsigned int)a2;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;

@end
