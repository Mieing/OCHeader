@class HTSLiveFeedDataApi;

@interface AWELiveFeedDataController : AWEListDataController

@property (retain, nonatomic) HTSLiveFeedDataApi *feedApi;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)p_requestWithType:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
