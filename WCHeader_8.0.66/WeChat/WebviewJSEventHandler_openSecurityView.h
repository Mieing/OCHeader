@class NSDictionary;

@interface WebviewJSEventHandler_openSecurityView : WebviewJSEventHandlerBase

@property (retain, nonatomic) NSDictionary *m_handlers;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)registerHandler;
- (void).cxx_destruct;

@end
