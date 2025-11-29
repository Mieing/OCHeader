@interface AWEAdNetworkRequester : NSObject

+ (void)postWithURLStringContentTypeJson:(id)a0 params:(id)a1 completionBlock:(id /* block */)a2;
+ (void)getWithURLStringContentTypeJson:(id)a0 params:(id)a1 completionBlock:(id /* block */)a2;

@end
