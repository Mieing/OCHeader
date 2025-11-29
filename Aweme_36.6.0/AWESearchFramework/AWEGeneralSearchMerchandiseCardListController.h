@class NSString, NSDictionary, NSNumber, NSMutableArray;

@interface AWEGeneralSearchMerchandiseCardListController : AWEListDataController

@property (copy, nonatomic) NSString *requestURLString;
@property (retain, nonatomic) NSNumber *loadMoreCursor;
@property (retain, nonatomic) NSDictionary *requestParams;
@property (retain, nonatomic) NSString *searchID;
@property (retain, nonatomic) NSMutableArray *hunterCacheKeyArray;
@property (nonatomic) long long initialIndex;
@property (copy, nonatomic) NSDictionary *logExtra;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)fetchDataWithCompletion:(id /* block */)a0 isLoadmore:(BOOL)a1;
- (void)relateHunterVideoWithAwemeModel:(id)a0 index:(long long)a1 logExtra:(id)a2;
- (void)updateLoadMoreParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)init;
- (void)dealloc;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
