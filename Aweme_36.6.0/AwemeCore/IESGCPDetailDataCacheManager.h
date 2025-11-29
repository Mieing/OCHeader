@class IESGCPDetailDynamicProtocolAPI, NSString, IESGCPDetailDynamicDataSource;
@protocol HTSKVStore, IESGCPUserService;

@interface IESGCPDetailDataCacheManager : NSObject <IESGCPDetailDataCacheRouter>

@property (retain, nonatomic) id<IESGCPUserService> userService;
@property (retain, nonatomic) id<HTSKVStore> cacheKVStore;
@property (retain, nonatomic) IESGCPDetailDynamicProtocolAPI *dataApi;
@property (retain, nonatomic) IESGCPDetailDynamicDataSource *dynamicDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)hasCacheWithParamModel:(id)a0;
- (void)preloadFirstPageDataModelIfNeed:(id)a0 dataFrom:(id)a1;
- (id)getDataWithParamsModel:(id)a0;
- (void)setDataWithParamsModel:(id)a0 dataString:(id)a1 dataFrom:(id)a2;
- (id)getDataWith:(id)a0 prefixCacheKey:(id)a1 scene:(id)a2 bizModel:(id)a3 bizID:(id)a4 bizType:(long long)a5 roomID:(id)a6 videoID:(id)a7;
- (void)setDataWith:(id)a0 prefixCacheKey:(id)a1 scene:(id)a2 bizModel:(id)a3 bizID:(id)a4 bizType:(long long)a5 roomID:(id)a6 videoID:(id)a7 dataString:(id)a8 dataFrom:(id)a9;
- (id)getCacheBaseKey:(id)a0 prefixCacheKey:(id)a1 scene:(id)a2 userID:(id)a3 bizModel:(id)a4 bizID:(id)a5 bizType:(long long)a6;
- (id)getDataStringWithKey:(id)a0;
- (void)clearExpireStore;
- (void).cxx_destruct;
- (double)expireTime;
- (void)clearStore;
- (BOOL)enableCache;

@end
