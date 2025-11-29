@class NSURLCredential, NSURL, AFSecurityPolicy, AFNetworkReachabilityManager, AFHTTPRequestSerializer, NSOperationQueue, NSObject, AFHTTPResponseSerializer;
@protocol AFURLResponseSerialization, OS_dispatch_group, OS_dispatch_queue, AFURLRequestSerialization;

@interface AFHTTPRequestOperationManager : NSObject <NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) AFHTTPRequestSerializer<AFURLRequestSerialization> *requestSerializer;
@property (retain, nonatomic) AFHTTPResponseSerializer<AFURLResponseSerialization> *responseSerializer;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL shouldUseCredentialStorage;
@property (retain, nonatomic) NSURLCredential *credential;
@property (retain, nonatomic) AFSecurityPolicy *securityPolicy;
@property (retain, nonatomic) AFNetworkReachabilityManager *reachabilityManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup;

+ (BOOL)supportsSecureCoding;
+ (id)manager;

- (id)HTTPRequestOperationWithRequest:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (id)HTTPRequestOperationWithHTTPMethod:(id)a0 URLString:(id)a1 parameters:(id)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (id)GET:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)HEAD:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)POST:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)POST:(id)a0 parameters:(id)a1 constructingBodyWithBlock:(id /* block */)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (id)PUT:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)PATCH:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)DELETE:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
