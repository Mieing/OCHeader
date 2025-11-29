@interface BDECPigeonShopInfoFetchOptions : NSObject

@property (nonatomic) BOOL useCache;
@property (nonatomic) double cacheExpirationTime;

- (id)init;

@end
