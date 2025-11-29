@interface AWETeenAuthorRecommendDataController : AWEListDataController

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)p_reportAwemeVideoNotTeen:(id)a0;
- (void)p_fetchWithPullType:(long long)a0 completion:(id /* block */)a1;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
