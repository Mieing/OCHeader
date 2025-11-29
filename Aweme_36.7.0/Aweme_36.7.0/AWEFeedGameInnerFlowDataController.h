@class NSDictionary;

@interface AWEFeedGameInnerFlowDataController : AWEListDataController

@property (copy, nonatomic) NSDictionary *requestParams;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)requestModelForNetworkService;
- (void)notifyInsertGameCardWithResponseModel:(id)a0 dataSource:(id)a1;
- (id)initWithRequestParams:(id)a0;
- (void).cxx_destruct;

@end
