@class JSEvent, VoicePrintVerifyLogic;

@interface WebviewJSEventHandler_requestWxVoicePrintVerifyInternal : WebviewJSEventHandlerBase

@property (retain, nonatomic) JSEvent *cbEvent;
@property (retain, nonatomic) VoicePrintVerifyLogic *voicePrintVerifyLogic;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void).cxx_destruct;

@end
