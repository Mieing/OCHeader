@interface WebviewJSEventHandler_callLiteAppConnectEvent : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)subscribeLiteAppStore:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)unsubscribeLiteAppStore:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)ensureLiteAppStoreAlive:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)checkLiteAppStoreAlive:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)releaseLiteAppStore:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;

@end
