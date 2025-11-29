@interface WAJSEventHandler_createRequestTask : WAJSEventHandler_reportBaseEvent

- (void)handleJSEvent:(id)a0;
- (void)innerHandleJSEvent:(id)a0 isForceCellularNetwork:(BOOL)a1;
- (void)mainThread_callBackResult:(id)a0;

@end
