@class NSOperationQueue, NSMutableDictionary, NSURLSession;

@interface CRRequestSession : NSObject

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSMutableDictionary *headers;

+ (id)session;
+ (id)sessionWithURLSession:(id)a0;
+ (id)sessionWithURLSession:(id)a0 queue:(id)a1;

- (id)initWithURLSession:(id)a0 queue:(id)a1;
- (void)setValue:(id)a0 forHeader:(id)a1;
- (void)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)dataTaskWithRequest:(id)a0 retryCount:(long long)a1 retryWhere:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)cancelAllRequests;
- (id)operationWithRequest:(id)a0 retryCount:(long long)a1 retryWhere:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;

@end
