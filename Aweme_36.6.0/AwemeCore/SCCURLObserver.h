@class SCCEventTracker, WKWebView, SCCWebViewConfiguration;

@interface SCCURLObserver : NSObject

@property (weak) WKWebView *webView;
@property (retain) SCCWebViewConfiguration *config;
@property (retain, nonatomic) SCCEventTracker *tracker;

- (void)resetSCCStatusForWebView;
- (id)filterDomainFromURL:(id)a0;
- (void)recordPreHost:(id)a0;
- (BOOL)isHost:(id)a0 mactchingAllowDomain:(id)a1;
- (void)__processResponse:(id)a0 withError:(id)a1 withURL:(id)a2 wasteTime:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
