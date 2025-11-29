@class NSString, NSArray, NSNumber, NSMutableArray;

@interface AWEFamiliarDetailDataController : AWEListDataController <AWEUserMessage>

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *level;
@property (retain, nonatomic) NSNumber *fetchCursor;
@property (retain, nonatomic) NSNumber *fetchLevel;
@property (nonatomic) unsigned long long totalCount;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) unsigned long long autoPullCount;
@property (nonatomic) BOOL isRefresh;
@property (nonatomic) long long lastPullType;
@property (retain, nonatomic) NSMutableArray *filteredAwemeIDs;
@property (copy, nonatomic) NSArray *dataSourceDuplicateAwemeIDs;
@property (nonatomic) BOOL hasBlockedInitFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAFDServiceDOUYINLiteAdaperClass;
+ (Class)aAWELiteUGMainModuleAdapterClass;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id /* block */)isEqualBlock;
- (id)addressBookAccess;
- (void)albumAppendImagesNotificationHandler:(id)a0;
- (void)updateConcernCardListInfo:(id)a0 feedType:(long long)a1;
- (id)locationAccess;
- (id)transferAwemeListIfNeededWithArray:(id)a0;
- (void)reloadListWithPullType:(long long)a0 completion:(id /* block */)a1;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)registerCloneManager;
- (id)transferAwemeModelForLive:(id)a0;
- (id)aAFDServiceDOUYINLiteAdaper;
- (id)aAWELiteUGMainModuleAdapter;
- (void)addDuplicateAwemeModel:(id)a0 inToBeRemovedArray:(id)a1;
- (void)listenNotification;
- (id)__commonParams;
- (void)addAdditionalParams:(id)a0;
- (id)loadmoreDataSourceWithArray:(id)a0 requestId:(id)a1 response:(id)a2;
- (id)refreshDataSourceWithArray:(id)a0 requestId:(id)a1 response:(id)a2;
- (void)loadMoreWithCompletion:(id /* block */)a0 isReloadToLoadMore:(BOOL)a1;
- (void)p_storeLiveListWithData:(id)a0 isFetch:(BOOL)a1;
- (void)p_cachedActiveUserDataWithData:(id)a0;
- (void)p_postWithURLString:(id)a0 pullType:(long long)a1 params:(id)a2 modelClass:(Class)a3 completion:(id /* block */)a4;
- (id)transferAwemeModelForUser:(id)a0;
- (id)transferUserModel:(id)a0;
- (id)handleDailyAwemes:(id)a0;
- (id)filterDuplicatedDatasourceWithArray:(id)a0 requestId:(id)a1 isEqual:(id /* block */)a2 didGetDuplicatedArray:(id /* block */)a3 needDataSourceDeduplicate:(BOOL)a4 filteredInfo:(id)a5;
- (BOOL)hasDrawBackPreloadFeed;
- (void)recordDuplicateArray:(id)a0;
- (void)reportWithDuplicateArray:(id)a0;
- (id)initWithCursor:(id)a0 level:(id)a1;
- (void).cxx_destruct;
- (id)URLString;
- (void)dealloc;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
