@class NSURLRequest, NSURLSessionTask, NSURLSession;

@interface CRURLRequestOperation : CRAsyncOperation

@property (copy, nonatomic) NSURLSessionTask *task;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLRequest *request;
@property (nonatomic) long long retryCount;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)operationWithRequest:(id)a0 session:(id)a1 retryCount:(long long)a2 completionHandler:(id /* block */)a3;

- (id)initWithRequest:(id)a0 retryCount:(long long)a1 sesssion:(id)a2 completionHandler:(id /* block */)a3;
- (void)startAsyncOperation;
- (void)finish;
- (void)dealloc;
- (void).cxx_destruct;

@end
