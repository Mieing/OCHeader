@class NSString;

@interface AWEFansListFilteredDataController : AWEListDataController

@property (nonatomic) long long offset;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long category;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)paramsForNetworkServiceWithLoadMore:(BOOL)a0;
- (id)URLForNetworkService;
- (void)toggleCategory:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)initWithUid:(id)a0;

@end
