@interface AWESearchMiddleGSRequstManager : NSObject

+ (id)currentUid;
+ (void)requestGSDataWithContext:(id)a0;
+ (void)clearGSDataCache:(id)a0;
+ (id)cacheKeyList;
+ (void)cacheGSDataWithContext:(id)a0 gsData:(id)a1;
+ (void)requestGSDataWithURL:(id)a0 requestParams:(id)a1 useNewInterface:(BOOL)a2 completion:(id /* block */)a3;
+ (id)fetchCacheGSDataWithContext:(id)a0;
+ (id)cacheInfo;

@end
