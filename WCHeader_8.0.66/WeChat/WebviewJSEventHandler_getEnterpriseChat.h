@interface WebviewJSEventHandler_getEnterpriseChat : WebviewJSEventHandlerBase <PBMessageObserverDelegate>

- (void)genFailMsg:(id)a0;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)dealloc;

@end
