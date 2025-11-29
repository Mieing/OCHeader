@class NSDictionary, NSMutableDictionary, UIViewController;

@interface AWEJSBridge : IESPiper

@property (retain, nonatomic) NSMutableDictionary *preventCloseDictionary;
@property (copy, nonatomic) NSDictionary *adInfoDictionary;
@property (weak, nonatomic) UIViewController *webViewController;
@property (nonatomic) BOOL shouldShowPopupWindow;
@property (nonatomic) BOOL isPreventingCloseEvent;

+ (void)registerJSBridgeHandlerBlock:(id /* block */)a0 forJSMethod:(id)a1;
+ (void)runOnceForLazyRegister;
+ (void)registerAWEJS2NativeHandlerBlock:(id /* block */)a0 forJSMethod:(id)a1 authType:(unsigned long long)a2;
+ (void)unLock;
+ (void)registerJSBridgeHandlerBlock:(id /* block */)a0 forJSMethod:(id)a1 authType:(unsigned long long)a2;
+ (void)bridgeMethodAssert:(BOOL)a0;
+ (void)bridgeDicAssert:(BOOL)a0 method:(id)a1;
+ (id)JSBridgeDictionary;
+ (unsigned long long)shrinkedJSBAuth;
+ (void)lock;
+ (void)initialize;

- (void)_registerJsBridge;
- (void)_registerCommonJsBridge;
- (void)registerPreventClose;
- (void)registerAWEJS2NativeHandlerBlock:(id /* block */)a0 forJSMethod:(id)a1 authType:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;

@end
