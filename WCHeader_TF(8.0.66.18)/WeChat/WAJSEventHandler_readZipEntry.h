@interface WAJSEventHandler_readZipEntry : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)onSuccess:(id)a0;
- (void)onError:(id)a0 errNo:(unsigned int)a1;
- (id)getResultDicWithZipEntries:(id)a0;

@end
