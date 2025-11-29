@class NSOperationQueue;

@interface BDPWebViewSchemeTaskHandler : BDWebViewSchemeTaskHandler

@property (retain, nonatomic) NSOperationQueue *handleQueueNoConcurrency;

+ (BOOL)bdw_canHandleRequest:(id)a0 webview:(id)a1;
+ (BOOL)skipSSLCertificateErrorOff;
+ (id)uniqueIDForWebView:(id)a0;

- (id)initWithWebView:(id)a0 schemeTask:(id)a1;
- (void)bdw_startURLSchemeTask;
- (BOOL)_tryHandleWebView:(id)a0;
- (id)configHttpTask:(id)a0;
- (void)recordTTNetResponseInfo:(id)a0 withError:(id)a1;
- (id)currentUniqueID;
- (void)updatePrefetchStateWithURL:(id)a0 statusCode:(unsigned long long)a1 usedCache:(BOOL)a2;
- (void).cxx_destruct;

@end
