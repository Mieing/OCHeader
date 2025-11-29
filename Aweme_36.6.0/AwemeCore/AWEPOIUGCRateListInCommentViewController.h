@class NSString, UICollectionView, AWEPOIUGCRatePageContext, AWEPOIUGCRateAgentHandler, NSDictionary;
@protocol AWECommentGesProtocol;

@interface AWEPOIUGCRateListInCommentViewController : DitoGeneralContainerViewController <DitoMonitorExtensionDataSourceProtocol, DitoPageViewDelegate, AWEPOIUGCRateListInCommentViewControllerProtocol>

@property (retain, nonatomic) AWEPOIUGCRatePageContext *context;
@property (retain, nonatomic) AWEPOIUGCRateAgentHandler *agentHandler;
@property (retain, nonatomic) UICollectionView *bodyView;
@property (copy, nonatomic) NSDictionary *paramDict;
@property (nonatomic) double targetFrameHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECommentGesProtocol> gesDelegate;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)registerExtensions;
- (id)extraBizParams;
- (void)bindStateAndAction;
- (id)DitoPageScene;
- (void)didLoadPageModel:(id)a0;
- (void)pageWillBeginDragging:(id)a0;
- (id)constData;
- (void)loadMoreWithParams:(id)a0 completion:(id /* block */)a1;
- (void)registerAgents;
- (id)extraPerformanceTrackParams;
- (id)extraRequestCostParamsForResponse:(id)a0;
- (BOOL)shouldAppendMainBizParamsToLoadMore;
- (id)ratePageContext;
- (void).cxx_destruct;
- (id)createContext;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)requestPath;

@end
