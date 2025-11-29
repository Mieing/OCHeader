@class NSString, AWEHotPointDataConfig, NSMutableArray;
@protocol AWEHotPointDataSource;

@interface AWEHotPointFeedDataController : AWEListDataController

@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL alreadyLoadmoreForZeroVideoOnlyOnce;
@property (copy, nonatomic) NSString *actionType;
@property (nonatomic) long long bizType;
@property (weak, nonatomic) id<AWEHotPointDataSource> configDataSource;
@property (retain, nonatomic) AWEHotPointDataConfig *loadMoreConfig;
@property (retain, nonatomic) AWEHotPointDataConfig *loadPreviousConfig;
@property (retain, nonatomic) NSMutableArray *originDataArray;
@property (nonatomic) BOOL shouldAvoidCacheBeforeLoadmore;

+ (id /* block */)isHotSpotModelEqualBlock;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)filterDuplicatedDatasourceWithArray:(id)a0 isEqual:(id /* block */)a1;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (unsigned long long)feedColumnType;
- (void)modifyHotspotModelIfNeeded:(id)a0;
- (id)dataControllerForKeyword:(id)a0;
- (void)recoverUnfold;
- (id)initWithBizType:(long long)a0;
- (void)needReloadDataWithDataArray:(id)a0 loadmoreHasMore:(BOOL)a1 totalVideoCount:(long long)a2;
- (void)removeOtherHotPointVideosIncludeFoldVideo:(BOOL)a0;
- (void)onStrcuturePanelNoDataNotifiaction:(id)a0;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (id)configureParamsWithConfig:(id)a0;
- (void)handleArticleContent:(id)a0;
- (void)updateDataSourceForModel:(id)a0 response:(id)a1 dataArray:(id)a2;
- (void)addPreviousHotPointVideosFromDataController:(id)a0 previousConfig:(id)a1;
- (void)addNewConfigForPreviousHotPoint:(id)a0;
- (void)addNewHotPointVideosFromDataController:(id)a0 nextConfig:(id)a1;
- (void)addNewConfigForNextHotPoint:(id)a0;
- (void)calculateTotalCountWithConfig:(id)a0 direction:(long long)a1 reponse:(id)a2 filteredArrayCount:(long long)a3 originCount:(long long)a4;
- (void)calculateVideoIndexNumberWithConfig:(id)a0 direction:(long long)a1 filteredArray:(id)a2 originCount:(long long)a3;
- (void)reloadForDefaultWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)reloadForIPWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)updatePreviousConfig;
- (void)updateNextConfig;
- (void)requestForEventNode:(id)a0 loadDirection:(long long)a1 completion:(id /* block */)a2;
- (BOOL)checkForPreviousConfig:(id)a0 completion:(id /* block */)a1;
- (void)requestForPreviousWithURL:(id)a0 params:(id)a1 previousConfig:(id)a2 completion:(id /* block */)a3;
- (BOOL)checkForNextConfig:(id)a0 completion:(id /* block */)a1;
- (void)requestForNextWithURL:(id)a0 params:(id)a1 pullType:(long long)a2 nextConfig:(id)a3 completion:(id /* block */)a4;
- (id)configureParamsForIPWithConfig:(id)a0;
- (void)trackVideoResponse:(BOOL)a0 config:(id)a1 videoCount:(long long)a2 duration:(long long)a3;
- (void)addVideoArray:(id)a0 AheadDataSourceInReverseOrder:(BOOL)a1;
- (void)markVideoFoldNotice:(id)a0;
- (void)trackerVideoRequestWithConfig:(id)a0;
- (void)cacheDataControllerIfNeed;
- (void)unfoldAtIndex:(long long)a0 withCompletion:(id /* block */)a1 andUnfoldConfig:(id)a2;
- (void)calculateProgressViewInfoForFilteredArray:(id)a0 config:(id)a1 direction:(long long)a2 reponse:(id)a3;
- (BOOL)hasStructurePanel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
