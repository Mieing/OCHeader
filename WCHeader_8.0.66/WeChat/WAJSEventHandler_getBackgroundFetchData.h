@interface WAJSEventHandler_getBackgroundFetchData : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)getAndReturnPreFetchData:(id)a0 cleanCache:(BOOL)a1;
- (void)getAndReturnLocalPeriodFetchData:(id)a0 cleanCache:(BOOL)a1;

@end
