@class UIViewController;
@protocol AWEHotSpotFusionPageMultiTabManagerDelegate;

@interface AWEHotSpotFusionPageDiscussInGeneralCachalotDataController : AWEGeneralCachalotDataController

@property (retain, nonatomic) UIViewController *hotSpotFusionDiscussParamsProvider;
@property (weak, nonatomic) id<AWEHotSpotFusionPageMultiTabManagerDelegate> multiTabManagerDelegate;

+ (BOOL)enableUseNewPreRequestTagWithSearchSource:(id)a0;

- (id)refViewController;
- (BOOL)enableNewPreRequestWithInitialParams:(id)a0 context:(id)a1;
- (BOOL)enablePreRequestWithInitialParams:(id)a0 context:(id)a1;
- (long long)requestDataCount;
- (id)customRequestPath;
- (id)customSearchType;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (void)refreshResponse:(id)a0;
- (void)loadMoreResponse:(id)a0;
- (void)handleRefreshNetworkMonitorWithParams:(id)a0 response:(id)a1 error:(id)a2;
- (id)hotspotDiscussMutilTabManager;
- (id)discussRequestParams;
- (void).cxx_destruct;

@end
