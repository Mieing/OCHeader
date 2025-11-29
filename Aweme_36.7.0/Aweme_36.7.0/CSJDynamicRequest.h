@interface CSJDynamicRequest : CSJAdNetworkRequest

@property (nonatomic) double networkTimeout;

+ (id)requestWithURL:(id)a0 method:(long long)a1 networkTimeout:(double)a2 parameter:(id)a3 completionWithSuccess:(id /* block */)a4 failure:(id /* block */)a5;

- (unsigned long long)bu_requestCachePolicy;
- (double)requestTimeoutInterval;

@end
