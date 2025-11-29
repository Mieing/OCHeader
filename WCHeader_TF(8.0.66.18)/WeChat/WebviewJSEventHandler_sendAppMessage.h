@class SendAppMessageBaseImpl;

@interface WebviewJSEventHandler_sendAppMessage : WebviewJSEventHandlerBase

@property (retain, nonatomic) SendAppMessageBaseImpl *sendMessageImpl;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void).cxx_destruct;

@end
