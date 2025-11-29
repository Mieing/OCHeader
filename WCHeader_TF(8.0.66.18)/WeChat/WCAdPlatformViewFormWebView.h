@class WCAdFormWebViewJSLogic, NSString, YYWKWebView, NSURLRequest, FlutterMethodChannel;

@interface WCAdPlatformViewFormWebView : WCAdPlatformViewBase <YYWebViewDelegate, WCAdFormWebViewJSLogicDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) YYWKWebView *webView;
@property (retain, nonatomic) FlutterMethodChannel *channel;
@property (retain, nonatomic) WCAdFormWebViewJSLogic *jsLogic;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *canvasKey;
@property (retain, nonatomic) NSString *componentId;
@property (retain, nonatomic) NSString *qrExtInfo;
@property (nonatomic) BOOL hiddenBeforeLoad;
@property (nonatomic) BOOL bgTransparent;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewIdentifier:(long long)a1 arguments:(id)a2 binaryMessenger:(id)a3 methodChannel:(id)a4;
- (id)view;
- (void)dealloc;
- (id)getPreInjectScriptStr;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2 isMainFrame:(BOOL)a3 navigationAction:(id)a4;
- (void)webViewDidStartLoad:(id)a0 navigation:(id)a1;
- (void)webViewDidFinishLoad:(id)a0 navigation:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 navigation:(id)a2;
- (void)webviewDidReceiveScriptMessage:(id)a0 handler:(id)a1 rawMessage:(id)a2;
- (void)publishEvent:(id)a0 params:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)handleJsEvent:(id)a0 params:(id)a1 needCallback:(BOOL)a2 result:(id /* block */)a3;
- (void).cxx_destruct;

@end
