@class NSURL, WKWebView, NSMutableArray;

@interface BDWebServerTrustChallengeHandler : NSObject

@property (weak, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSURL *currentURL;
@property (nonatomic) unsigned long long challengeState;
@property (retain, nonatomic) NSMutableArray *challenges;

- (void)webView:(id)a0 challenge:(id)a1 challengecCompletion:(id /* block */)a2 ttnetErrorURL:(id)a3 ttnetCompletion:(id /* block */)a4 needForceMainThread:(BOOL)a5;
- (void)webView:(id)a0 challenge:(id)a1 challengecCompletion:(id /* block */)a2 ttnetErrorURL:(id)a3 ttnetCompletion:(id /* block */)a4 url:(id)a5;
- (void)dispatchHandler:(id /* block */)a0 needForceMainThread:(BOOL)a1;
- (void)setPageChallengeIsPass:(BOOL)a0 withHost:(id)a1;
- (BOOL)isWebViewHandleServerTrustWithHost:(id)a0;
- (id)handleCerErrWith:(id)a0 evaStatus:(int)a1;
- (void)_tryShowWarningAlertController;
- (void)handleServerTrustWithHost:(id)a0 withChallenge:(id)a1 certResultDic:(id)a2;
- (id)myBDWebKitBundle;
- (id)getMultiLangText:(id)a0;
- (void)_showWarningAlertController:(id)a0;
- (BOOL)shouldSkipSSLCertificateError;
- (void)handleSSLError:(id)a0 WithComplete:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;

@end
