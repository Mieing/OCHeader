@class UIView, NSString, AWEAdWebViewController;

@interface AWEBDALiteWebView : UIView <BDARVLiteWebViewProtocol>

@property (retain, nonatomic) AWEAdWebViewController *adWebViewVC;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIView *retryView;
@property (retain, nonatomic) UIView *webView;
@property (copy, nonatomic) id /* block */ loadStatusBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerJSBridgeHandler;

- (void)adWebViewDidFinishLoadWithWebViewController:(id)a0;
- (void)adWebViewStartLoadWithWebViewController:(id)a0;
- (void)adWebViewDidFailLoadWithWebViewController:(id)a0 error:(id)a1;
- (void)trackRewardVideoPreloadWithLabel:(id)a0;
- (void)showWithModel:(id)a0;
- (BOOL)gobackLightLanding;
- (BOOL)canGoBackLightLanding;
- (void)webViewConfig:(id /* block */)a0;
- (id)sendEventToWebview:(id)a0;
- (id)scrollViewForEmbedView;
- (void)sendPreloadEvent:(id)a0;
- (void)sendMessageFromWebview:(id /* block */)a0;
- (id)initWithAdWebViewController:(id)a0;
- (void)playableClosed;
- (void).cxx_destruct;
- (void)clear;
- (void)retry;

@end
