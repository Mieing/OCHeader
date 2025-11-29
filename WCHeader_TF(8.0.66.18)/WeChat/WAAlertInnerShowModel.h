@class WAWebViewController, NSString, WAAlertModel, WAWebViewPlugin_NativeView, WAWebViewPlugin_InputKeyboard;
@protocol WAJSEventHandlerContextDelegate;

@interface WAAlertInnerShowModel : NSObject <IWAWebViewPluginDelegate>

@property (weak, nonatomic) WAAlertModel *alertModel;
@property (weak, nonatomic) id<WAJSEventHandlerContextDelegate> context;
@property (weak, nonatomic) WAWebViewController *webViewController;
@property (weak, nonatomic) WAWebViewPlugin_InputKeyboard *keyboardPlugin;
@property (weak, nonatomic) WAWebViewPlugin_NativeView *nativeInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 webViewController:(id)a1;
- (void)showAlert:(id)a0;
- (void)onError:(id)a0;
- (void)onSuccess:(id)a0;
- (void).cxx_destruct;

@end
