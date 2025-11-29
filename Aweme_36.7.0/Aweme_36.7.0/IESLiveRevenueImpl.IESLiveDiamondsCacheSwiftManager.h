@class NSString, _TtC18IESLiveRevenueImpl32IESLiveDiamondsCacheSwiftManager;

@interface IESLiveRevenueImpl.IESLiveDiamondsCacheSwiftManager : NSObject <IESLiveDiamondsCacheService>

@property (class, nonatomic, readonly) _TtC18IESLiveRevenueImpl32IESLiveDiamondsCacheSwiftManager *shared;
@property (class, nonatomic, readonly) NSString *kIESLiveDiamondsLastCacheDate;
@property (class, nonatomic, readonly) NSString *kIESLiveDiamondsCache;
@property (class, nonatomic, readonly) NSString *kIESLiveShouldUseCache;

@property (nonatomic) BOOL isCacheShown;

- (void)requestCacheDiamondsIfNeedWithUserId:(id)a0;
- (BOOL)enableCacheStrategy;
- (id)diamondCacheForUserId:(id)a0;
- (void)cacheDiamond:(id)a0 userId:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
