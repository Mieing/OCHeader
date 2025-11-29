@class NSString, WebviewJSEventHandlerFacade;

@interface LiteAppJsApiWebViewBridge : LiteAppPermanentJsApi <JSEventHandler, WebviewJSEventHandlerBaseDelegate> {
    NSString *_errorMsg;
}

@property (retain, nonatomic) WebviewJSEventHandlerFacade *jsEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)addToPermanent;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (BOOL)invokeInMainThread;
- (void)onEndEvent:(id)a0 withResult:(id)a1;
- (id)GetCurrentWebviewViewController;
- (id)webviewController;
- (void)callbackWithId:(id)a0 callback:(id)a1 params:(id)a2;
- (void).cxx_destruct;

@end
