@class NSObject, WKWebView, NSString, TTBridgeRegister, NSHashTable, NSURL, UIViewController;
@protocol TTBridgeAuthorization;

@interface TTWebViewBridgeEngine : NSObject <TTBridgeEngine>

@property (class, readonly, nonatomic) NSHashTable *webViewEngines;

@property (retain, nonatomic) TTBridgeRegister *bridgeRegister;
@property (readonly, weak, nonatomic) UIViewController *sourceController;
@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, weak, nonatomic) NSObject *sourceObject;
@property (retain, nonatomic) id<TTBridgeAuthorization> authorization;
@property (readonly, weak, nonatomic) WKWebView *wkWebView;
@property (nonatomic) BOOL schemaInterceptionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)correctTopViewControllerFor:(id)a0;
+ (void)postEventNotification:(id)a0 msg:(long long)a1 params:(id)a2 resultBlock:(id /* block */)a3;
+ (void)postEventNotification:(id)a0 params:(id)a1;

- (void)fireEvent:(id)a0 params:(id)a1 resultBlock:(id /* block */)a2;
- (void)fireEvent:(id)a0 params:(id)a1;
- (void)installOnWKWebView:(id)a0;
- (void)uninstallFromWKWebView:(id)a0;
- (void)fireEvent:(id)a0 msg:(long long)a1 params:(id)a2 resultBlock:(id /* block */)a3;
- (BOOL)respondsToCommand:(id)a0;
- (void)fireEvent:(id)a0 msg:(long long)a1 params:(id)a2;
- (void)callbackBridge:(id)a0 params:(id)a1;
- (void)callbackBridge:(id)a0 params:(id)a1 resultBlock:(id /* block */)a2;
- (void)callbackBridge:(id)a0 msg:(long long)a1 params:(id)a2 resultBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (long long)engineType;
- (id)init;
- (id)initWithAuthorization:(id)a0;
- (void)dealloc;
- (void)evaluateJavaScript:(id)a0 completionHandler:(id /* block */)a1;

@end
