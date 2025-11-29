@class NSArray;

@interface AWEAwemeDetailRouterIMListDataController : AWEListDataController

@property (nonatomic) long long initialIndex;
@property (nonatomic) long long previousIndex;
@property (nonatomic) long long moreIndex;
@property (nonatomic) long long pageSize;
@property (copy, nonatomic) NSArray *itemIDArray;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (id)p_addFakeAwemeIfNeededWithOriginItemIDArray:(id)a0 awemeList:(id)a1;
- (id)initWithInitialIndex:(long long)a0 pageSize:(long long)a1 itemIDArray:(id)a2;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
