@class WebviewJSEventHandlerTingBase;

@interface LiteAppJsApiTingBase : LiteAppJsApi <JSEventHandler>

@property (retain, nonatomic) WebviewJSEventHandlerTingBase *tingHandler;

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (id)tingEventPlugin;
- (id)genTingEventHandler;
- (void)onEndEvent:(id)a0 withResult:(id)a1;
- (id)GetCurrentWebviewViewController;
- (void).cxx_destruct;

@end
