@class IESECWindowFeedViewController, IESECWinFeedEnterParameters, NSString, IESECRelationActivityDynamicModel;

@interface IESECWindowFeedDataController : IESECListDataController

@property (retain, nonatomic) IESECWinFeedEnterParameters *parameters;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSString *filterPromotionIds;
@property (retain, nonatomic) NSString *cartURL;
@property (retain, nonatomic) IESECRelationActivityDynamicModel *dynamicModules;
@property (weak, nonatomic) IESECWindowFeedViewController *viewController;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithCompletion:(id /* block */)a0;
- (void)requestComponentsWithCompletion:(id /* block */)a0;
- (void)handlePageResponse:(id)a0;
- (void)handleComponentResponse:(id)a0;
- (void)handleHeaderResponse:(id)a0;
- (void)requestHeaderWithCompletion:(id /* block */)a0;
- (void)refreshCartInfo;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
