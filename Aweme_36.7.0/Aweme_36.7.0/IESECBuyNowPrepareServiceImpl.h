@class NSString, NSMutableDictionary, NSDictionary;

@interface IESECBuyNowPrepareServiceImpl : NSObject <IESECBuyNowPrepareService>

@property (retain, nonatomic) NSString *bioType;
@property (retain, nonatomic) NSString *biometricParams;
@property (retain, nonatomic) NSString *cjPassthroughInfo;
@property (retain, nonatomic) NSString *cjSdk;
@property (nonatomic) BOOL isCool;
@property (nonatomic) BOOL isPrepared;
@property (nonatomic) double bottomOffset;
@property (nonatomic) double navBarHeight;
@property (retain, nonatomic) NSMutableDictionary *abTestConfig;
@property (copy, nonatomic) NSString *preloadCacheKey;
@property (retain, nonatomic) NSDictionary *preloadParamsCache;
@property (copy, nonatomic) NSString *intelligenceCacheKey;
@property (nonatomic) BOOL isIntelligenceReady;
@property (copy, nonatomic) NSString *curPrefetchProductId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getBottomOffset;
+ (double)getNavBarHeight;
+ (BOOL)getABTestForEnumKey:(unsigned long long)a0;
+ (BOOL)hasPrefetchedForProductId:(id)a0;
+ (void)prefetchDataWithUltimateSchemaModel:(id)a0 sceneType:(unsigned long long)a1;
+ (void)startPrepare;
+ (void)prefetchDataWithUltimateSchemaParams:(id)a0 sceneType:(unsigned long long)a1;
+ (BOOL)supportDirectBuyNowWithOrderUrl:(id)a0;
+ (id)shared;

- (id)getFinanceRiskWithScene;
- (BOOL)isCloudUnionPayInstalled;
- (id)jailBreak;
- (BOOL)hasPrefetchedForProductId:(id)a0;
- (id)getPrepareCjInfo;
- (void)p_prepareABTest;
- (void)p_prepareCjInfo;
- (void)p_preconnectHost;
- (void)registerBuyNowPreload;
- (BOOL)getPrepareABTestForEnumKey:(unsigned long long)a0;
- (double)p_getBottomOffset;
- (double)p_getNavBarHeight;
- (void)prefetchDataWithUltimateSchemaParams:(id)a0 sceneType:(unsigned long long)a1;
- (id)p_getEnumStringWithEnumKey:(unsigned long long)a0;
- (BOOL)p_getABTestWithEnumKey:(unsigned long long)a0;
- (id)getCacheKeyWithProductID:(id)a0 sceneType:(unsigned long long)a1;
- (void)registerKey:(id)a0 Handler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)sdkVersion;

@end
