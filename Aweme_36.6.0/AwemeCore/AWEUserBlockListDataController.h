@interface AWEUserBlockListDataController : AWEListDataController

@property (nonatomic) long long listType;
@property (nonatomic) long long lastCursor;
@property (nonatomic) BOOL hasMore;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)updateLocalDataCenterWithBlockList:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)initWithListType:(long long)a0;

@end
