@class NSString, NSDictionary;

@interface AWEDPlayletUserProfileTabDataController : AWEListDataController

@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSDictionary *requestParams;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithUserID:(id)a0;
- (BOOL)canLoadMore;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void)requestWithMaxRetryTimes:(long long)a0 params:(id)a1 cursor:(id)a2 count:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
