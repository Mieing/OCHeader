@class NSArray;

@interface AWEAnchorMediumDataController : AWEListDataController

@property (nonatomic) long long recommendCursor;
@property (nonatomic) long long searchCursor;
@property (nonatomic) BOOL recommendHasMore;
@property (nonatomic) BOOL searchHasMore;
@property (copy, nonatomic) NSArray *recommendGameDataSource;
@property (copy, nonatomic) NSArray *searchGameDataSource;

- (void)refreshRecommendDataWithCompletion:(id /* block */)a0;
- (void)refreshSearchDataithKeword:(id)a0 completion:(id /* block */)a1;
- (void)fetchRecommendGameDataSourceWithCursor:(long long)a0 count:(long long)a1 completion:(id /* block */)a2;
- (void)fetchSearchGameDataSourceWithKeyword:(id)a0 cursor:(long long)a1 count:(long long)a2 completion:(id /* block */)a3;
- (void)initFetchRecommendDataWithCompletion:(id /* block */)a0;
- (void)initFetchSearchDataWithKeword:(id)a0 completion:(id /* block */)a1;
- (void)loadMoreRecommendDataWithCompletion:(id /* block */)a0;
- (void)loadMoreSearchDataWithKeword:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
