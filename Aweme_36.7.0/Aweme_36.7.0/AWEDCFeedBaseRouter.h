@class AWEDCFeedDefaultRouterService, AWEDCFeedTransitionService, AWEDCFeedPageContext, AWEDCFeedEventDispatcher;
@protocol AWEDCFeedListViewControllerProtocol;

@interface AWEDCFeedBaseRouter : NSObject

@property (weak, nonatomic) AWEDCFeedDefaultRouterService *routerService;
@property (weak, nonatomic) id<AWEDCFeedListViewControllerProtocol> container;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (weak, nonatomic) AWEDCFeedEventDispatcher *eventDispatcher;
@property (retain, nonatomic) AWEDCFeedTransitionService *transitionService;

- (id)coreEventList;
- (void)updateTransitionContextWithModel:(id)a0 startView:(id)a1 toContextProvider:(id)a2;
- (void)enterVCWithRouterTargetModel:(id)a0;
- (void).cxx_destruct;
- (id)navigationController;
- (id)initWithBuilder:(id)a0;

@end
