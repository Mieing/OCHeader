@interface WAJSEventHandler_write : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)innerHandleEvent:(id)a0 isSync:(BOOL)a1;
- (id)decodeBinaryString:(id)a0;
- (id)decodeHexString:(id)a0;

@end
