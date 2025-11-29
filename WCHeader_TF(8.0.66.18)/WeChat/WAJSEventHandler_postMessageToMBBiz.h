@interface WAJSEventHandler_postMessageToMBBiz : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (id)validateString:(id)a0 forKey:(id)a1;
- (void)logAndHandleError:(id)a0;
- (void)handleError:(id)a0;

@end
