@interface WebviewJSEventHandler_writeLog : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (BOOL)isLevelParamValid:(id)a0;
- (void)logWithLevel:(id)a0 msg:(id)a1;

@end
