@interface WebviewJSEventHandler_requestVirtualPayment : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)endWithResult:(id)a0 event:(id)a1;
- (void)endWithError:(id)a0 event:(id)a1;

@end
