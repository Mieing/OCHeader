@class TTHttpResponse, NSOperationQueue, NSDate, TTHttpTask, NSURLRequest;

@interface BDTTNetPrefetchTask : NSObject

@property (retain) NSOperationQueue *operationQueue;
@property (retain) TTHttpTask *httpTask;
@property (retain) NSDate *prefetchDate;
@property (retain) NSDate *hitDate;
@property (nonatomic) BOOL failed;
@property (nonatomic) BOOL hasResendRequest;
@property (copy) id /* block */ headerCallback;
@property (copy) id /* block */ dataCallback;
@property (copy) id /* block */ callbackWithResponse;
@property (copy) id /* block */ redirectCallback;
@property (retain) NSURLRequest *request;
@property (retain) TTHttpResponse *response;
@property (retain) NSDate *responseDate;
@property (nonatomic) unsigned long long cacheTime;
@property (nonatomic) BOOL hitPrefetch;

- (BOOL)shouldResendRequestWithResponse:(id)a0;
- (void)resendRequestAfterRejected;
- (void)loadRequest:(id)a0 withHeaderCallback:(id /* block */)a1 dataCallback:(id /* block */)a2 finishCallback:(id /* block */)a3 redirectCallback:(id /* block */)a4;
- (id)nomalRequest;
- (unsigned long long)opitimizeMillSecond;
- (void)prefetch;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (BOOL)isValid;
- (void)resume;
- (void)cancel;

@end
