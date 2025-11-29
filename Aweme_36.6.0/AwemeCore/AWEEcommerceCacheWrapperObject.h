@interface AWEEcommerceCacheWrapperObject : NSObject

@property (nonatomic) double lastStoreCacheTime;
@property (nonatomic) double cacheLimitTime;
@property (retain, nonatomic) id cacheObject;

- (BOOL)isGoodsCacheExpired;
- (void).cxx_destruct;
- (id)init;

@end
