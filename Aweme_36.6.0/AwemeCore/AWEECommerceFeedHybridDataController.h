@class NSArray, NSString, NSDictionary;

@interface AWEECommerceFeedHybridDataController : AWEListDataController

@property (copy, nonatomic) NSArray *pendingAwemeList;
@property (nonatomic) long long pageNum;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *apiPathString;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *outerReqId;
@property (nonatomic) BOOL waitingFirstItem;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithCompletion:(id /* block */)a0;
- (void)fetchAwemeListWithParameters:(id)a0 completion:(id /* block */)a1;
- (void)loadFirstItemWithCompletion:(id /* block */)a0;
- (void)requestFirstItemWithCompletion:(id /* block */)a0;
- (void)fetchFirstAwemeWithParameters:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
