@class NSURLProtocol, QBProtocolWorker;

@interface QBProtocolProxy : NSObject {
    QBProtocolWorker *_worker;
    int _resType;
    BOOL _isQBWebViewRequest;
    unsigned long long _byteLength;
}

@property (weak, nonatomic) NSURLProtocol *protocol;

+ (id)validURLForRequest:(id)a0;
+ (void)addProxyAuthenticationDelegate:(id)a0;
+ (void)removeProxyAuthenticationDelegate:(id)a0;
+ (unsigned long long)indexOfDelegate:(id)a0;
+ (void)setProtocolWorkerClass:(Class)a0;
+ (BOOL)protocolCanInitWithRequest:(id)a0 isQBWebViewRequest:(BOOL)a1;
+ (id)protocolAddCustomHTTPHeader:(id)a0;
+ (id)protocolCanonicalRequestForRequest:(id)a0;
+ (BOOL)protocolRequestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)workerClassRespondsToSelector:(SEL)a0;

- (void)protocolDidInitialized:(id)a0 resourceType:(int)a1;
- (BOOL)protocolShouldStartLoading;
- (void)protocolDidStartLoading;
- (BOOL)protocolDidReceiveResponse:(inout id *)a0 error:(id *)a1;
- (id)protocolDidReceiveData:(id)a0;
- (void)protocolDidFinishLoading;
- (void)protocolDidFinishLoadingWithCached:(id)a0 errCode:(long long)a1;
- (void)protocolDidFailWithError:(id)a0;
- (id)protocolWillSendRequest:(id)a0 redirectResponse:(id)a1;
- (void)protocolDidStopLoading;
- (void)protocolDidResolveDNS:(double)a0 type:(unsigned long long)a1 address:(id)a2 errCode:(long long)a3;
- (void)protocolDidSendRequest:(id)a0 type:(long long)a1;
- (void)protocolAfterSendRequest:(id)a0;
- (BOOL)protocolWillSendRequestForAuthenticationChallenge:(id)a0 forURL:(id)a1;
- (BOOL)protocolDidReceiveChallenge:(id)a0 completionHandler:(id /* block */)a1 forURL:(id)a2;
- (void).cxx_destruct;

@end
