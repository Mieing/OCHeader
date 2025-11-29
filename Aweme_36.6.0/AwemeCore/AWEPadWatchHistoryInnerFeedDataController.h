@class NSNumber, NSMutableSet;

@interface AWEPadWatchHistoryInnerFeedDataController : AWEListDataController

@property (retain, nonatomic) NSMutableSet *deduplicationSet;
@property (retain, nonatomic) NSNumber *maxCursor;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithAwemeModels:(id)a0;
- (id)appendAwemeModels:(id)a0;
- (void)fetchHistoryDataWithMaxCursor:(long long)a0 count:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
