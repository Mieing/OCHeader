@class NSString, NSMutableArray, NSDictionary;

@interface AFDMentionFeedDataController : AWEListDataController {
    BOOL _loadmoreHasMore;
    NSMutableArray *_filteredDataSource;
}

@property (retain, nonatomic) NSMutableArray *userAwemeIDsCache;
@property (nonatomic) BOOL isFirstFresh;
@property (copy, nonatomic) NSString *requestURL;
@property (nonatomic) long long fetchCount;
@property (copy, nonatomic) NSDictionary *additionalRequestParams;
@property (retain, nonatomic) Class responseModelClass;
@property (nonatomic) unsigned long long topTimeStampCursor;
@property (nonatomic) unsigned long long bottomTimeStampCursor;
@property (copy, nonatomic) NSString *expectedFirstUserID;
@property (copy, nonatomic) NSString *expectedFirstItemID;
@property (retain, nonatomic) NSDictionary *logExt;

- (void)setLoadmoreHasMore:(BOOL)a0;
- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)p_fetchWithCount:(long long)a0 pullType:(long long)a1 completion:(id /* block */)a2;
- (id)commonRequestParams;
- (id)p_slideTypeWithPullType:(long long)a0;
- (id)p_filterDuplicatedDatasourceWithArray:(id)a0;
- (id)getFilterdAwemeArrayWithMentionAwemeList:(id)a0;
- (void)p_updateDataSourceWithPullType:(long long)a0 response:(id)a1 filterdAwemeArray:(id)a2;
- (void)p_addFakeAwemeIfNeeded;
- (void)p_configAwemeModel:(id)a0;
- (BOOL)p_shouldInsertFakeAwemeForced;
- (void)p_configMentionAwemeList:(id)a0;
- (id)userAwemeIDsCacheJsonParams;
- (id)validateRequestParams;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)filteredDataSource;
- (void)setFilteredDataSource:(id)a0;

@end
