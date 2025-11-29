@class NSMutableArray;

@interface AWEFollowListRecommendCardDataController : AWEListDataController

@property (retain, nonatomic) NSMutableArray *cardModels;

- (id)paramsForNetworkService;
- (id)modelTransform:(id)a0;
- (id)formatedLimitNumberString:(id)a0 uid:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
