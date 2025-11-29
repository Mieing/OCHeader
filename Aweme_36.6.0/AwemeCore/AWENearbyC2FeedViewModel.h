@class AWENearbyPageContext, AWENearbyC2FeedDataController, AWENearbyGrouponListDataResponse, NSMutableArray, NSNumber;

@interface AWENearbyC2FeedViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *cellSize;
@property (retain, nonatomic) NSMutableArray *datalist;
@property (nonatomic) BOOL isRequestAir;
@property (retain, nonatomic) AWENearbyC2FeedDataController *dataController;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (readonly, nonatomic) NSNumber *topFeedIndex;
@property (readonly, nonatomic) AWENearbyGrouponListDataResponse *listResponse;

+ (id)getIndexPathArrayWithSource:(id)a0 section:(long long)a1;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithPageContext:(id)a0;
- (void)initFetchV2WithCompletion:(id /* block */)a0;
- (void)refreshGrouponV2WithRefreshConfig:(id)a0 completion:(id /* block */)a1;
- (void)updateGrouponCacheWithListResponse:(id)a0;
- (void)loadGrouponV2CacheWithCacheConfig:(id)a0 completion:(id /* block */)a1;
- (void)deleteCards:(id)a0;
- (void)deleteCardWithMode:(unsigned long long)a0 idList:(id)a1;
- (void)preInitFetch;
- (void)insertAwemeModel:(id)a0 index:(long long)a1 allowApendMax:(BOOL)a2 insertType:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)deleteAwemes:(id)a0 completion:(id /* block */)a1;
- (void)insertAwemeModel:(id)a0 index:(long long)a1 insertType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)refreshWithParams:(id)a0 completion:(id /* block */)a1;
- (void)requestRecommendDataAfterClickWithParams:(id)a0 completion:(id /* block */)a1;
- (void)cancelRecommendDataRequest;
- (void)getDeleteLiveRoomAwemesWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void)passiveRefreshGrouponWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)cancelCurrentRequest;

@end
