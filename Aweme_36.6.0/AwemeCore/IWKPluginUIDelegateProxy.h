@class NSString, WKWebView;
@protocol WKUIDelegate;

@interface IWKPluginUIDelegateProxy : NSObject <WKUIDelegate>

@property (weak, nonatomic) id<WKUIDelegate> proxy;
@property (weak, nonatomic) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (void)forwardInvocation:(id)a0;
- (void)webViewDidClose:(id)a0;
- (BOOL)webView:(id)a0 shouldPreviewElement:(id)a1;
- (id)webView:(id)a0 previewingViewControllerForElement:(id)a1 defaultActions:(id)a2;
- (void)webView:(id)a0 commitPreviewingViewController:(id)a1;
- (void)webView:(id)a0 contextMenuConfigurationForElement:(id)a1 completionHandler:(id /* block */)a2;
- (void)webView:(id)a0 contextMenuWillPresentForElement:(id)a1;
- (void)webView:(id)a0 contextMenuForElement:(id)a1 willCommitWithAnimator:(id)a2;
- (void)webView:(id)a0 contextMenuDidEndForElement:(id)a1;

@end
