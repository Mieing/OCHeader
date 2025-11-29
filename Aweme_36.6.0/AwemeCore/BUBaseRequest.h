@class NSData, NSString, NSError, NSURLSessionTaskMetrics, NSDictionary, NSURLRequest, NSURLSessionTask, NSHTTPURLResponse;

@interface BUBaseRequest : NSObject

@property (retain, nonatomic) NSURLSessionTask *requestTask;
@property (retain, nonatomic) NSData *responseData;
@property (retain, nonatomic) id responseJSONObject;
@property (retain, nonatomic) id responseObject;
@property (retain, nonatomic) NSString *responseString;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long requestMethod;
@property (retain, nonatomic) NSData *httpBody;
@property (readonly, nonatomic) NSURLRequest *currentRequest;
@property (readonly, nonatomic) NSURLRequest *originalRequest;
@property (readonly, nonatomic) NSHTTPURLResponse *response;
@property (readonly, nonatomic) long long responseStatusCode;
@property (copy, nonatomic) id /* block */ successCompletionBlock;
@property (copy, nonatomic) id /* block */ failureCompletionBlock;
@property (nonatomic) BOOL assumesHTTP3Capable;
@property (copy, nonatomic) NSDictionary *metricData;
@property (retain, nonatomic) NSURLSessionTaskMetrics *taskMetrics;
@property (copy, nonatomic) id /* block */ constructingBodyBlock;
@property (nonatomic) long long requestPriority;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isExecuting) BOOL executing;

- (void)setCompletionBlockWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void)handleMetric:(id)a0;
- (id)requestArgument;
- (void)clearCompletionBlock;
- (long long)requestSerializerType;
- (long long)responseSerializerType;
- (BOOL)useCDN;
- (id)cdnUrl;
- (void)startWithCompletionBlockWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (unsigned long long)bu_requestCachePolicy;
- (id)requestHeaderFieldValueDictionary;
- (void).cxx_destruct;
- (BOOL)allowsCellularAccess;
- (void)stop;
- (double)requestTimeoutInterval;
- (void)start;
- (id)baseUrl;
- (id)requestUrl;
- (id)responseHeaders;

@end
