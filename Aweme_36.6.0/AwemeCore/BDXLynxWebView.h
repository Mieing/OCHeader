@class NSString, LynxPropertyDiffMap;
@protocol BDXWebViewLoader;

@interface BDXLynxWebView : LynxUI <BDXWebViewLoaderDelegate>

@property (nonatomic) BOOL urlExists;
@property (retain, nonatomic) id<BDXWebViewLoader> loader;
@property (retain, nonatomic) NSString *loaderType;
@property (retain, nonatomic) LynxPropertyDiffMap *diffMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__741;
+ (id)__lynx_prop_config__946;
+ (id)__lynx_prop_config__864;
+ (id)__lynx_prop_config__782;
+ (id)__lynx_prop_config__823;
+ (id)__lynx_prop_config__905;
+ (id)__lynx_ui_method_config__987;
+ (id)__lynx_ui_method_config__1178;

- (void)onNodeReady;
- (void)src:(id)a0 requestReset:(BOOL)a1;
- (void)reload:(id)a0 withResult:(id /* block */)a1;
- (void)setScrollBarEnable:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setParams:(id)a0 requestReset:(BOOL)a1;
- (void)bounces:(BOOL)a0 requestReset:(BOOL)a1;
- (void)enableTapGestureSimultaneouslyRecursively:(id)a0;
- (id)nameOfScriptMessageHandler;
- (void)setEnableDebug:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setWebViewType:(id)a0 requestReset:(BOOL)a1;
- (void)eval:(id)a0 withResult:(id /* block */)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (id)createView;

@end
