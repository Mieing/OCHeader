@class NSArray, NSMutableDictionary, NSString;

@interface AWETeenHotSpotDataController : AWEListDataController

@property (copy, nonatomic) NSArray *hotSpotList;
@property (retain, nonatomic) NSMutableDictionary *totalDataSource;
@property (copy, nonatomic) NSString *originHotID;
@property (copy, nonatomic) NSString *endHotID;
@property (retain, nonatomic) NSString *enterFrom;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)p_reportAwemeVideoNotTeen:(id)a0;
- (void)initFetchWithOriginHotID:(id)a0 completion:(id /* block */)a1;
- (void)refreshWithOriginHotID:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_checkHasLoop;
- (void)p_fetchFeedWithHotID:(id)a0 pullType:(long long)a1 completion:(id /* block */)a2;
- (void)p_appendFeedWithBeginHotID:(id)a0 completion:(id /* block */)a1;
- (void)p_appendFeedWithBeginHotID:(id)a0 beginIndex:(long long)a1 completion:(id /* block */)a2;
- (id)p_feedRequestParamsWithPullType:(long long)a0 feedModel:(id)a1;
- (void)fetchHotSpotListWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
