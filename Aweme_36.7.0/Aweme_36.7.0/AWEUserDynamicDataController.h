@class NSNumber, NSMutableDictionary, NSString;

@interface AWEUserDynamicDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSMutableDictionary *filteredToRaw;
@property (retain, nonatomic) NSMutableDictionary *rawToFiltered;
@property (retain, nonatomic) NSString *userID;
@property (nonatomic) BOOL isCurrentUser;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)calculateFilteredDataSource;
- (long long)dataSourceIndexFromFilteredIndex:(long long)a0;
- (long long)filteredDataSourceIndexFromIndex:(long long)a0;
- (id)initWithUserID:(id)a0;
- (BOOL)canLoadMore;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (id)_transformReponseToConcernModel:(long long)a0 model:(id)a1;
- (void).cxx_destruct;
- (void)removeAll;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
