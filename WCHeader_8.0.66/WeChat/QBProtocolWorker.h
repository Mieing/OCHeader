@class NSURLProtocol;

@interface QBProtocolWorker : NSObject

@property (weak, nonatomic) NSURLProtocol *protocol;

+ (void)addAuthenticationDelegate:(id)a0;
+ (void)removeAuthenticationDelegate:(id)a0;
+ (BOOL)qbProxyProtocolCanInitWithRequest:(id)a0 isQBWebViewRequest:(BOOL)a1;
+ (id)qbProxyProtocolAddCustomHTTPHeader:(id)a0;
+ (id)qbProxyCanonicalRequestForRequest:(id)a0;

- (void)qbProxyProtocolDidInitialized;
- (BOOL)qbProxyProtocolShouldStartLoading;
- (void)qbProxyProtocolDidStartLoading;
- (BOOL)qbProxyProtocolDidReceiveResponse:(inout id *)a0 error:(id *)a1;
- (id)qbProxyProtocolDidReceiveData:(id)a0;
- (void)qbProxyProtocolDidFinishLoading;
- (void)qbProxyProtocolDidFailWithError:(id)a0;
- (id)qbProxyProtocolWillSendRequest:(id)a0 redirectResponse:(id)a1;
- (void)qbProxyProtocolDidStopLoading;
- (void)qbProxyProtocolDidFinishLoadingWithCached:(id)a0 errCode:(long long)a1;
- (void)qbProxyProtocolAfterSendRequest:(id)a0;
- (void).cxx_destruct;

@end
