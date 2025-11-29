@class NSString, UILabel, BUPlayableAd;

@interface AWEPlayableWebViewController : AWEAdWebViewController <BUPlayableAdDelegate> {
    UILabel *_webviewLabel;
}

@property (nonatomic) long long playableResponseCode;
@property (nonatomic) BOOL disableVisibleChange;
@property (retain, nonatomic) BUPlayableAd *playableSDK;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseAudioAndVideoPlay;
- (void)playableAd:(id)a0 loadRequest:(id)a1;
- (void)playableAd:(id)a0 registerHandlerBlock:(id /* block */)a1 forJSMethod:(id)a2;
- (void)playableAd:(id)a0 fireEvent:(id)a1 params:(id)a2;
- (void)playableAd:(id)a0 executeJavaScript:(id)a1 completion:(id /* block */)a2;
- (void)playableEventReportNotification:(id)a0;
- (void)setupPlayableEventNotification;
- (void)removePlayableEventNotification;
- (id)webviewSettings;
- (id)webviewLabel;
- (void)setWebviewLabel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (void)webViewDidStartLoad:(id)a0;
- (void)webViewDidFinishLoad:(id)a0;
- (void)setupWebView;
- (void)handleURLResponse:(id)a0;

@end
