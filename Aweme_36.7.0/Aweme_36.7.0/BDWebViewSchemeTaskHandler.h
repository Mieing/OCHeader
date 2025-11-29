@class NSString, NSURL, TTHttpTask, NSOperationQueue, BDWebViewPreloadTask, BDWebURLSchemeTask, BDTTNetPrefetchTask, NSURLProtocol, NSMutableDictionary, WKWebView;

@interface BDWebViewSchemeTaskHandler : NSObject <BDWebURLSchemeTaskHandler>

@property (retain, nonatomic) BDWebURLSchemeTask *schemeTask;
@property (weak, nonatomic) WKWebView *webView;
@property (retain, nonatomic) TTHttpTask *httpTask;
@property (retain, nonatomic) BDTTNetPrefetchTask *prefetchTask;
@property (retain, nonatomic) BDWebViewPreloadTask *preloadTask;
@property (retain, nonatomic) NSURLProtocol *urlProtocol;
@property (nonatomic) BOOL isStopped;
@property (nonatomic) BOOL hasReceivedData;
@property (retain, nonatomic) NSOperationQueue *handleQueue;
@property (retain, nonatomic) NSMutableDictionary *hostMap;
@property (nonatomic) BOOL isSkipSSLError;
@property (retain, nonatomic) NSURL *webViewURL;
@property (nonatomic) double ttnetTaskStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)bdw_canHandleRequest:(id)a0;

- (id)initWithWebView:(id)a0 schemeTask:(id)a1;
- (void)bdw_startURLSchemeTask;
- (void)bdw_stopURLSchemeTask;
- (void)handleStartSchemeTask;
- (BOOL)_tryHandleWebView:(id)a0;
- (void)handleTTNetworkHeaderResponse:(id)a0;
- (void)handleTTNetworkDataResponse:(id)a0;
- (void)handleTTNetworkFinishResponse:(id)a0 withObj:(id)a1 withError:(id)a2;
- (void)handleTTNetworkRedrectResponse:(id)a0 withNewLocation:(id)a1;
- (id)fixCORSHeaderWithResponse:(id)a0;
- (id)configHttpTask:(id)a0;
- (id)_ttnetParmWithResponse:(id)a0;
- (BOOL)_willCallLoadingFailedWithResponse:(id)a0 withError:(id)a1;
- (void)recordTTNetResponseInfo:(id)a0 withError:(id)a1;
- (id)stringValueWithKey:(id)a0 headers:(id)a1;
- (BOOL)isReqHostInSafeList:(id)a0;
- (void)setStringValue:(id)a0 forKey:(id)a1 headers:(id)a2;
- (id)headerLowCaseKeyWithNormalKey:(id)a0;
- (id)responseHeadersMonitorData:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
