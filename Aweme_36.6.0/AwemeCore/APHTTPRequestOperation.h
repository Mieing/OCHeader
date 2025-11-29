@class NSRecursiveLock, NSHTTPURLResponse, NSError, NSURLRequest, NSObject;
@protocol OS_dispatch_queue;

@interface APHTTPRequestOperation : APURLConnectionOperation

@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSError *HTTPError;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly, nonatomic) BOOL hasAcceptableStatusCode;
@property (readonly, nonatomic) BOOL hasAcceptableContentType;
@property (nonatomic) NSObject<OS_dispatch_queue> *successCallbackQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> *failureCallbackQueue;

+ (id)acceptableContentTypes;
+ (id)acceptableStatusCodes;
+ (void)addAcceptableStatusCodes:(id)a0;
+ (void)addAcceptableContentTypes:(id)a0;
+ (BOOL)canProcessRequest:(id)a0;

- (void)setCompletionBlockWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (unsigned long long)responseStringEncoding;
- (void).cxx_destruct;
- (void)pause;
- (id)error;
- (void)dealloc;

@end
