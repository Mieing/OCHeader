@class AWEDCFeedDefaultRouterService, AWEDCFeedTransitionService, AWEDCFeedPageContext, AWEDCFeedEventDispatcher;
@protocol AWEDCFeedListViewControllerProtocol;

@interface AWEDCFeedRouterBuilder : NSObject

@property (weak, nonatomic) AWEDCFeedDefaultRouterService *routerService;
@property (weak, nonatomic) id<AWEDCFeedListViewControllerProtocol> container;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (weak, nonatomic) AWEDCFeedEventDispatcher *eventDispatcher;
@property (retain, nonatomic) AWEDCFeedTransitionService *transitionService;

- (void).cxx_destruct;

@end
