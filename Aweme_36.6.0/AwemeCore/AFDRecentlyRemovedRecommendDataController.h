@interface AFDRecentlyRemovedRecommendDataController : AWEListDataController

@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;

+ (void)clearRecentlyRemovedUsers:(id /* block */)a0;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)URLForNetworkService;
- (id)params;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
