@class JSEvent;

@interface WebviewJSEventHandler_closeWindowAndGoNext : WebviewJSEventHandlerBase

@property (retain, nonatomic) JSEvent *cbEvent;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void).cxx_destruct;

@end
