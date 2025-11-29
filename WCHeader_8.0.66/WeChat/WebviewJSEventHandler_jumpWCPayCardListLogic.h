@class JSEvent;

@interface WebviewJSEventHandler_jumpWCPayCardListLogic : WebviewJSEventHandlerBase

@property (retain, nonatomic) JSEvent *m_jsEvent;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)failToOpen;
- (void).cxx_destruct;

@end
