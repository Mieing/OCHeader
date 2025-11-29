@class DitoGeneralContainerViewController;

@interface AWEPOIUGCRateAgentHandler : NSObject

@property (weak, nonatomic) DitoGeneralContainerViewController *controller;

- (void)bindStateAndAction;
- (void)pageWillBeginDragging:(id)a0;
- (id)constData;
- (void)registerAgents;
- (id)extraPerformanceTrackParams;
- (void)hideFeedStatusView;
- (void)refreshPageMoniterStartTime;
- (void)loadMoreWithParams:(id)a0;
- (void)handleLoadMoreWithData:(id)a0 error:(id)a1;
- (void)beforeDidLoadPageModel:(id)a0;
- (void)afterDidLoadPageModel:(id)a0;
- (id)extraRequestCostParamsForResponse:(id)a0;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (id)context;

@end
