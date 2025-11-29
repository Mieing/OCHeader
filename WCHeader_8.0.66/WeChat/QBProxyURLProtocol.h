@class NSString, QBProtocolProxy, QBNetwork, QBDNSQueryItem, NSDate;

@interface QBProxyURLProtocol : NSURLProtocol <QBNetworkDelegate> {
    long long _directReasonType;
    BOOL _stopLoading;
    int _resourceType;
    QBProtocolProxy *_protocolProxy;
    QBDNSQueryItem *_currentQueryItem;
    QBDNSQueryItem *_preQueryItem;
    NSDate *_startTime;
    long long _dnsHTTPStatus;
    long long _preQueryErr;
    BOOL _isTBSInnerRequest;
    BOOL _isHTMLRespnse;
    BOOL _hadProceJs;
    BOOL _hadFindFirstFlag;
    unsigned char _FindInsertPostionStatus;
    char *_firstTag;
    unsigned long long _firstTagPos;
    BOOL _firstTagFound;
    BOOL _isWKType;
    BOOL _hadCSPHeader;
    BOOL _NoRspCharset;
    NSString *_originPOSTURLString;
}

@property (retain, nonatomic) QBNetwork *network;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startProxyWithWorker:(Class)a0;
+ (void)setCurrentMainURL:(id)a0;
+ (id)getCurrentMainURL;
+ (BOOL)canInitWithRequest:(id)a0;
+ (BOOL)isTBSInnerURL:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (void)addFrameInfoWithAddress:(id)a0 withURLString:(id)a1;
+ (BOOL)isFrameSrcForRedirectWithURLString:(id)a0;
+ (BOOL)isFrameSrcForInjectWithURLString:(id)a0;
+ (void)removeFrameInfoWithAddress:(id)a0;
+ (void)removeAllFrameInfo;
+ (id)toInjectScriptTags;
+ (void)getSystemThreads;
+ (struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *)getWebThread;

- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (void)startLoading;
- (void)mttStartLoading;
- (void)_sendRequestDirect:(long long)a0;
- (id)_dnsQueryItem:(id)a0 cached:(BOOL)a1;
- (void)_doSendRequestWarpper:(id)a0;
- (void)_doSendRequest:(id)a0 directType:(long long)a1;
- (void)stopLoading;
- (void)mttStopLoading;
- (void)dealloc;
- (BOOL)isValidVary:(id)a0 withResponse:(id)a1;
- (long long)isValidCachedResponse:(id)a0;
- (id)cachedURLResponseIfPossible:(long long *)a0;
- (BOOL)canLoadCacheData;
- (BOOL)isValidateConditionalRequest;
- (BOOL)returnCacheDataFor304:(unsigned long long)a0;
- (void)recordRspContentType:(id)a0;
- (id)injectScriptToData:(id)a0;
- (BOOL)isNeedProcRedirectForLess_9_2_IOS;
- (void)sendRspToWebViewForRedirectWithLocation:(id)a0;
- (BOOL)isNeedSpecialRedirectedProcessByHttpResponseHeaders:(id)a0;
- (void)ifNeedNotfiyJsGetCookieResponse:(id)a0;
- (void)qbNetwork:(id)a0 didReceiveResponse:(id)a1;
- (void)sendRspToWebView:(id)a0;
- (void)qbNetwork:(id)a0 didReceiveData:(id)a1;
- (void)qbNetworkDidFinishLoading:(id)a0;
- (void)qbNetwork:(id)a0 didFailWithError:(id)a1;
- (id)qbNetwork:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (id)qbNetwork:(id)a0 willCacheResponse:(id)a1;
- (struct __SecTrust { } *)newServerTrust:(struct __SecTrust { } *)a0 forDomain:(id)a1;
- (void)qbNetwork:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (void)qbNetwork:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)qbNetworkOriginHost:(id)a0;
- (void)reportDNSDadRequest:(long long)a0 aInterval:(long long)a1 bInterval:(long long)a2 cInterval:(long long)a3;
- (void).cxx_destruct;

@end
