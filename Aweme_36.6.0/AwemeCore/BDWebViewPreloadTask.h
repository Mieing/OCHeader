@class NSDate, BDPreloadOperationQueue, TTHttpTask, NSURLRequest;

@interface BDWebViewPreloadTask : NSObject

@property (retain, nonatomic) BDPreloadOperationQueue *operationQueue;
@property (retain, nonatomic) TTHttpTask *httpTask;
@property BOOL failed;
@property (copy, nonatomic) id /* block */ innerHeaderCallBack;
@property (copy, nonatomic) id /* block */ innerDataCallBack;
@property (copy, nonatomic) id /* block */ innerCallBackWithResponse;
@property (copy, nonatomic) id /* block */ innerRedirectCallBack;
@property (copy, nonatomic) id /* block */ headerCallback;
@property (copy, nonatomic) id /* block */ dataCallback;
@property (copy, nonatomic) id /* block */ callbackWithResponse;
@property (copy, nonatomic) id /* block */ redirectCallback;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain) NSDate *hitDate;
@property (retain) NSDate *startDate;
@property (retain) NSDate *responseDate;

- (void)setSkipSSLCertificateError:(BOOL)a0;
- (id)initWithRequest:(id)a0 headerCallback:(id /* block */)a1 dataCallback:(id /* block */)a2 callbackWithResponse:(id /* block */)a3 redirectCallback:(id /* block */)a4;
- (void)reResume;
- (unsigned long long)optimizedTime;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)setPriority:(float)a0;
- (void)resume;
- (void)dealloc;
- (void)cancel;

@end
