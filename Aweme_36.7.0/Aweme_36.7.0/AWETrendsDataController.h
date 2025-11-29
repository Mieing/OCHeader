@class NSNumber;

@interface AWETrendsDataController : AWEListDataController

@property (copy, nonatomic) NSNumber *maxCursor;
@property (copy, nonatomic) NSNumber *minCursor;
@property (nonatomic) long long pullType;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)addCommonParams:(id)a0;
- (void)loadDataWithCompletion:(id /* block */)a0 pullType:(long long)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
