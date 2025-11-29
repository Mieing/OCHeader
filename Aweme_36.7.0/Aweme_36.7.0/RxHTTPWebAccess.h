@class NSOperationQueue, NSCache;
@protocol RxHTTPClient;

@interface RxHTTPWebAccess : NSObject

@property (readonly, nonatomic) id<RxHTTPClient> httpClient;
@property (readonly, nonatomic) NSOperationQueue *httpOperationQueue;
@property (readonly, nonatomic) NSCache *requestCache;

+ (id)rxInjectorInitializer;

- (id)initWithHTTPClient:(id)a0 httpOperationQueue:(id)a1;
- (id)_checkAndReturnErrorForNetworkResponse:(id)a0;
- (BOOL)_isSuccessfulStatusCode:(unsigned long long)a0;
- (id)httpResponseWithRequest:(id)a0;
- (void).cxx_destruct;

@end
