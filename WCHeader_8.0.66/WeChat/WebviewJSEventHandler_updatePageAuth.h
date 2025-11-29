@interface WebviewJSEventHandler_updatePageAuth : WebviewJSEventHandlerBase

@property (nonatomic) BOOL isUpdating;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)endWithError:(id)a0 event:(id)a1;
- (void)endWithSuccessResult:(id)a0 event:(id)a1;
- (void)endWithResult:(id)a0 event:(id)a1;

@end
