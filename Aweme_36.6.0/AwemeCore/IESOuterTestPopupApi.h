@interface IESOuterTestPopupApi : NSObject

+ (void)addActiveWithURL:(id)a0 requestParams:(id)a1 response:(id /* block */)a2;
+ (void)requestNewVersionWithOfflinePopupRequest:(id /* block */)a0 response:(id /* block */)a1;
+ (void)requestNewVersionWithOnlinePopupRequest:(id /* block */)a0 response:(id /* block */)a1;
+ (void)requestNewVersionWithTaskPopupRequest:(id /* block */)a0 response:(id /* block */)a1;

@end
