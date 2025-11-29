@class NSObject, ADFGWKWebView, NSString, NSURL, ADFGBridgeRegister, UIViewController;

@interface ADFGWebViewBridgeEngine : NSObject <ADFGBridgeEngine, WKScriptMessageHandler>

@property (retain, nonatomic) ADFGBridgeRegister *bridgeRegister;
@property (weak, nonatomic) NSObject *sourceObject;
@property (weak, nonatomic) UIViewController *sourceController;
@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, weak, nonatomic) ADFGWKWebView *wkWebView;
@property (copy, nonatomic) id /* block */ didStopLoadingBlock;
@property (copy, nonatomic) id /* block */ closeContainerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)correctTopViewControllerFor:(id)a0;

- (void)fireEvent:(id)a0 params:(id)a1 resultBlock:(id /* block */)a2;
- (void)fireEvent:(id)a0 params:(id)a1;
- (void)registerBridge:(id /* block */)a0;
- (id)initWithBridgeRegister:(id)a0;
- (void)_doRegisterIfNeeded;
- (BOOL)respondsToBridge:(id)a0;
- (void)unregisterBridge:(id)a0;
- (void)installOnWKWebView:(id)a0;
- (void)uninstallFromWKWebView:(id)a0;
- (void)installOnBulletWebView:(id)a0;
- (void)uninstallFromBullet:(id)a0;
- (void)fireEvent:(id)a0 msg:(long long)a1 params:(id)a2 resultBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)evaluateJavaScript:(id)a0 completionHandler:(id /* block */)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
