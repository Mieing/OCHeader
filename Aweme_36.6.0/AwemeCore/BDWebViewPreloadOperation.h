@class NSString, NSDictionary, NSMutableData, BDWebViewPreloadTask;

@interface BDWebViewPreloadOperation : NSOperation

@property (retain, nonatomic) NSMutableData *data;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSDictionary *headerField;
@property (nonatomic) BOOL useHTTPCaches;
@property (nonatomic) double cacheDuration;
@property (nonatomic) BOOL skipSSLCertificateError;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ dataCompletion;
@property (copy, nonatomic) id /* block */ chunkCompletion;
@property (copy, nonatomic) id /* block */ preloadWillStartCallback;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) BDWebViewPreloadTask *task;

- (id)bdp_preloadKey;
- (id)initWithURLString:(id)a0 headerField:(id)a1 useHttpCaches:(BOOL)a2 cacheDuration:(double)a3 chunkCompletion:(id /* block */)a4 dataCompletion:(id /* block */)a5;
- (id)initWithURLString:(id)a0 headerField:(id)a1 useHttpCaches:(BOOL)a2 cacheDuration:(double)a3 dataCompletion:(id /* block */)a4;
- (void)finishWithObj:(id)a0 error:(id)a1 response:(id)a2;
- (double)getHttpCachesIntervalWithResponse:(id)a0;
- (id)initWithURLString:(id)a0 headerField:(id)a1 useHttpCaches:(BOOL)a2 cacheDuration:(double)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)start;
- (void)cancel;

@end
