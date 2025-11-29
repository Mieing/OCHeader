@interface TencentLBSHttpClient : NSObject

+ (void)configHttpClientWithCallbackQueue;
+ (void)doPostForUrl:(id)a0 data:(id)a1 withMaxTimeout:(double)a2 completionBlock:(id /* block */)a3;

@end
