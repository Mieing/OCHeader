@class NSDictionary, NSNumber;

@interface AWEEcomSearchOrderSearchListDataController : AWEListDataController

@property (retain, nonatomic) NSDictionary *loadMoreInfo;
@property (retain, nonatomic) NSNumber *loadMoreCursor;
@property (nonatomic) long long initialIndex;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreInSelfWithCompletion:(id /* block */)a0 isLoadmore:(BOOL)a1;
- (id)initWithLoadMoreInfo:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
