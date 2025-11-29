@class NSMutableDictionary;

@interface AWEProfileBaseListDataController : AWEListDataController

@property (retain, nonatomic) NSMutableDictionary *completionDict;
@property (nonatomic) BOOL isLoadMoreRequestOnAir;
@property (nonatomic) BOOL isRequestOnAir;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)loadMoreWithSceneType:(long long)a0 completion:(id /* block */)a1;
- (void)loadMoreBizRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
