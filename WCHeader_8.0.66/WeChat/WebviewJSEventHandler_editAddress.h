@class JSEvent;

@interface WebviewJSEventHandler_editAddress : WebviewJSEventHandlerBase <IWebviewAskAuthorizationLogicExt> {
    JSEvent *_jsEvent;
}

- (id)init;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)a0;
- (void)OnAskAuthorizationFailure:(id)a0 ForAuthInfo:(id)a1;
- (void)startEditAddress;
- (void).cxx_destruct;

@end
