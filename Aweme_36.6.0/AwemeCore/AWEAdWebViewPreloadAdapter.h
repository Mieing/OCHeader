@interface AWEAdWebViewPreloadAdapter : HTSService <AWEAdWebViewPreloadAdapter, AWEAppAwemeSettingMessage> {
    void /* unknown type, empty encoding */ adWebviewPreloadPoolUseFalcon;
    void /* unknown type, empty encoding */ adWebViewEnableUseTTNet;
    void /* unknown type, empty encoding */ userFeatureDelegate;
}

- (void)onServiceInit;
- (void)awemeSettingDidChange;
- (void)setupSlardarWebViewClientMonitor:(id)a0 webView:(id)a1;
- (id)fetchThirdPreloadWebViewWith:(id)a0;
- (void)registerUserFeatureDelegate:(id)a0;
- (void)didReceiveMemoryWarningNotification;
- (void)feedModelDidDisplay:(id)a0 nextModel:(id)a1 currentIndex:(long long)a2 nextIndex:(long long)a3;
- (void)tryStartAdOrangeLynxLandingPreload:(id)a0;
- (void)tryPreloadLiveWebLandingResource:(id)a0;
- (void)tryClearPreloadLiveWebLandingResource:(id)a0;
- (void)updateFeedVideo:(id)a0 quickSlideStatus:(BOOL)a1;
- (void)webViewControllerViewDidLoad:(id)a0 requestURL:(id)a1;
- (void)webViewControllerViewDidDisappear:(id)a0 requestURL:(id)a1;
- (void)preloadWebViewDidShowed:(id)a0 requestURL:(id)a1;
- (BOOL)isPreLoadWebViewShowed:(id)a0 requestURL:(id)a1;
- (void)tryPreloadLiveLandingResource:(id)a0;
- (BOOL)isMainHTMLRequestSentForURLString:(id)a0;
- (BOOL)isPreloadedForURLString:(id)a0;
- (void)searchReceiveGeneralSearchModel:(id)a0;
- (void)searchClearAdInfos;
- (void)searchExit;
- (void).cxx_destruct;
- (id)init;

@end
