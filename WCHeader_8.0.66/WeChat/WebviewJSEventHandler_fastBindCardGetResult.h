@class JSEvent, NSString;

@interface WebviewJSEventHandler_fastBindCardGetResult : WebviewJSEventHandlerBase <WXPLiteAppModuleEventCallback>

@property (retain, nonatomic) JSEvent *jsEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onEventResponse:(id)a0 event:(id)a1 data:(id)a2 callbackId:(long long)a3;
- (void).cxx_destruct;

@end
