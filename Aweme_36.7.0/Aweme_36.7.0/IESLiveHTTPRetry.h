@interface IESLiveHTTPRetry : NSObject

+ (void)retryWithRequest:(id)a0 retryCount:(long long)a1 postHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
