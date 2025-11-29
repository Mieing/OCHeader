@class UITapGestureRecognizer, NSString, UIView, NSMutableArray, BDASifConfiguration;
@protocol BDXWebViewProtocol;

@interface BDASifWebPlugin : IWKPluginObject <UIGestureRecognizerDelegate, WKScriptMessageHandler, IWKInstancePlugin>

@property (weak, nonatomic) UIView<BDXWebViewProtocol> *webview;
@property (retain, nonatomic) BDASifConfiguration *config;
@property (retain, nonatomic) UITapGestureRecognizer *webTapGesture;
@property (nonatomic) double clickTimeStamp;
@property (retain, nonatomic) NSMutableArray *interceptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAutoJump;
- (void)setupInterceptors;
- (BOOL)isClicked;
- (void)sendV3TrackDataWithParams:(id)a0;
- (void)sendTrackDataWithParams:(id)a0;
- (void)performanceEventWithRequest:(id)a0 isPass:(BOOL)a1 isAutoJump:(BOOL)a2;
- (id)sslErrorInterceptor:(id)a0;
- (void)handleURL:(id)a0;
- (id)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)webView:(id)a0 didReceiveServerRedirectForProvisionalNavigation:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (id)webView:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithConfig:(id)a0;
- (id)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (id)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (id)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)onLoad:(id)a0;

@end
