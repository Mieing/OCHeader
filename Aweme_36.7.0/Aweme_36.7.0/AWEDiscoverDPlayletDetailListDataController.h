@class NSString;

@interface AWEDiscoverDPlayletDetailListDataController : AWEListDataController

@property (copy, nonatomic) NSString *playletID;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
