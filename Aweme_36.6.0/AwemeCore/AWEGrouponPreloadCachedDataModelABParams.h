@class NSString;

@interface AWEGrouponPreloadCachedDataModelABParams : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL cachingPreloadData;
@property (nonatomic) long long cacheValidTime;
@property (nonatomic) long long cacheNeedUpDataTime;
@property (nonatomic) BOOL needCheckCacheBeforePreRequest;
@property (nonatomic) unsigned long long reqWhenL3ChangeAction;
@property (nonatomic) BOOL cacheNotMobFreshClientShow;
@property (nonatomic) BOOL isPreloadOnlyApiUnification;
@property (nonatomic) BOOL needHideDistanceTag;
@property (nonatomic) BOOL isHotRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;


@end
