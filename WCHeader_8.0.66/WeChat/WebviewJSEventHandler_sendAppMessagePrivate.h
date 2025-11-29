@class SendAppMessageBaseImpl;

@interface WebviewJSEventHandler_sendAppMessagePrivate : WebviewJSEventHandlerBase

@property (retain, nonatomic) SendAppMessageBaseImpl *sendMessageImpl;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)setupMessageWrap:(id)a0 forEvent:(id)a1;
- (void).cxx_destruct;

@end
