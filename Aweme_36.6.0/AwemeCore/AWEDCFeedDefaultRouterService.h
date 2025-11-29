@class AWEDCFeedLiveRouter, NSString, AWEDCFeedTransitionService, AWEDCFeedArticleRouter, AWEDCFeedAIRouter, AWEDCFeedEventDispatcher, AWEDCFeedPageContext, AWEDCFeedDetailVCRouter, AWEDCFeedAlbumRouter;
@protocol AWEDCFeedListViewControllerProtocol;

@interface AWEDCFeedDefaultRouterService : NSObject <AWEDCFeedServiceProtocol>

@property (retain, nonatomic) AWEDCFeedDetailVCRouter *detailVCRouter;
@property (retain, nonatomic) AWEDCFeedAlbumRouter *albumRouter;
@property (retain, nonatomic) AWEDCFeedLiveRouter *liveRouter;
@property (retain, nonatomic) AWEDCFeedAIRouter *AIRouter;
@property (retain, nonatomic) AWEDCFeedArticleRouter *articleRouter;
@property (weak, nonatomic) id<AWEDCFeedListViewControllerProtocol> container;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (weak, nonatomic) AWEDCFeedEventDispatcher *eventDispatcher;
@property (retain, nonatomic) AWEDCFeedTransitionService *transitionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getRouterBuilder;
- (void)defaultDidSelectItemAtIndexPath:(id)a0 model:(id)a1 selectedCell:(id)a2 logExtraDict:(id)a3;
- (void).cxx_destruct;

@end
