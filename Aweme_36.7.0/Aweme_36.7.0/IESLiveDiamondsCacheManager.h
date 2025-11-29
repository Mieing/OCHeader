@class NSDictionary, NSCalendar, NSString;

@interface IESLiveDiamondsCacheManager : NSObject <IESLiveDiamondsCacheService>

@property (retain, nonatomic) NSDictionary *experimentDictionary;
@property (retain, nonatomic) NSCalendar *currentCalendar;
@property (nonatomic) BOOL isCacheShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)requestCacheDiamondsIfNeedWithUserId:(id)a0;
- (BOOL)enableCacheStrategy;
- (id)diamondCacheForUserId:(id)a0;
- (void)cacheDiamond:(id)a0 userId:(id)a1;
- (void)removeCacheProductsIfNeedWithUserId:(id)a0;
- (BOOL)shouldUseNewCache;
- (void).cxx_destruct;

@end
