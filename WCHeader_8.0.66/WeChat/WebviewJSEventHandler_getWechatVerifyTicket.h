@class JSEvent;

@interface WebviewJSEventHandler_getWechatVerifyTicket : WebviewJSEventHandlerBase <PBMessageObserverDelegate>

@property (retain, nonatomic) JSEvent *jsEvent;

- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
