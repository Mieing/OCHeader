@class UIScreenEdgePanGestureRecognizer, NSString, NSMutableDictionary;

@interface YYWKWebView : YYBaseWebView <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler> {
    NSMutableDictionary *m_containerDict;
}

@property (nonatomic) BOOL isSettingAllowsBackForwardNavigationGestures;
@property (weak, nonatomic) UIScreenEdgePanGestureRecognizer *swipeBackGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)getViewIdFromView:(id)a0;
+ (void)hookWKChildScrollView;
+ (void)hookWKChildScrollViewWithSEL:(SEL)a0;
+ (id)hookTagForSelector:(SEL)a0;

- (BOOL)insertChildView:(id)a0 viewIdentity:(id)a1;
- (id)getChildView:(unsigned int)a0;
- (BOOL)removeChildView:(unsigned int)a0;
- (BOOL)removeAllNativeView;
- (BOOL)checkNativeViewStatusAndReportIfLossed;
- (id)p_findScrollViewFromView:(id)a0 byViewId:(unsigned int)a1;
- (id)p_findScrollViewFromView:(id)a0 byViewIdentity:(id)a1;
- (id)findScrollViewByViewIdentity:(id)a0;
- (id)containerForNativeView:(id)a0;
- (void)dumpContextInfoWhenAttachScrollViewFail:(unsigned int)a0;
- (void)onSameLayerChangedScrollView:(id)a0;
- (void)setAllowsBackForwardNavigationGestures:(BOOL)a0;
- (void)addGestureRecognizer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)currentProcessPool;
- (BOOL)canShowAlertInCurrentWebViewController;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)showTipView:(id)a0;
- (void)webView:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)buildMenuWithBuilder:(id)a0;
- (void).cxx_destruct;

@end
