@class NSString, NSDictionary, AWELiveShelfCacheManager;
@protocol AWEHttpTask;

@interface AWELiveShelfViewModel : NSObject

@property (copy, nonatomic) NSString *aggCardId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *couponIds;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *envAddressInfo;
@property (copy, nonatomic) NSDictionary *envRoomLevelParams;
@property (copy, nonatomic) NSString *serverExtraInfo;
@property (copy, nonatomic) NSString *refreshInfo;
@property (copy, nonatomic) NSDictionary *pageParams;
@property (retain, nonatomic) id<AWEHttpTask> httpTask;
@property (nonatomic) BOOL preload;
@property (copy, nonatomic) NSDictionary *roomDimensionParams;
@property (copy, nonatomic) NSDictionary *shelfDimensionParams;
@property (copy, nonatomic) NSDictionary *timeDimensionParams;
@property (weak, nonatomic) AWELiveShelfCacheManager *cacheManager;
@property (copy, nonatomic) NSDictionary *commonTrackerParameter;

+ (id)dictionaryToString:(id)a0;
+ (id)cacheKeyWithRequestParams:(id)a0;
+ (void)adjustShelfModel:(id)a0 originModel:(id)a1;
+ (void)updateOriginDataWithShelfModel:(id)a0;
+ (id)requestParamsKeysNotAffectCachedData;

- (id)commonParam;
- (void)trackerWithEvent:(id)a0 params:(id)a1;
- (void)setAddressInfoRequestParams:(id)a0;
- (void)setRoomLevelParamsRequestParams:(id)a0;
- (void)logRequestStartWithUrl:(id)a0 params:(id)a1;
- (void)logRequestEndWithUrl:(id)a0 ttResponse:(id)a1 error:(id)a2;
- (id)createRequestParams;
- (id)updateListCacheIfNeededWithAggCardId:(id)a0 roomId:(id)a1 anchorId:(id)a2 sourceType:(id)a3 extraParams:(id)a4 completion:(id /* block */)a5;
- (id)commonCacheModelWithAggCardId:(id)a0 roomId:(id)a1 anchorId:(id)a2 extraParams:(id)a3;
- (void)cancelDetailRequest;
- (void)setCardListRequestParams:(id)a0;
- (void)prepareForReopen;
- (id)fetchListWithShelfModel:(id)a0 scene:(id)a1 couponIds:(id)a2 extraParams:(id)a3 pageParams:(id)a4 completion:(id /* block */)a5;
- (void)manageShelfClose;
- (id)createRequestParamsWithActiveSourceType:(id)a0;
- (id)fetchListWithTime:(long long)a0 activeSourceType:(id)a1 completion:(id /* block */)a2;
- (void)processWithUrlString:(id)a0 time:(long long)a1 cacheKey:(id)a2 params:(id)a3 model:(id)a4 error:(id)a5 completion:(id /* block */)a6;
- (id)cacheModelWithKey:(id)a0;
- (id)fetchListWithTime:(long long)a0 completion:(id /* block */)a1;
- (void)logCardDetailUpdateStatus:(id)a0;
- (id)fetchListWithAggCardId:(id)a0 roomId:(id)a1 anchorId:(id)a2 sourceType:(id)a3 activeSourceType:(id)a4 scene:(id)a5 couponIds:(id)a6 extraParams:(id)a7 refreshInfo:(id)a8 completion:(id /* block */)a9;
- (void).cxx_destruct;
- (id)init;

@end
