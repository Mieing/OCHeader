@class AWESearchHomeDCFeedTransitionService, NSString, AWEDCFeedPageContext, UIViewController;

@interface AWESearchHomeDCFeedRouterService : NSObject <AWEAwemeDetailTableViewControllerDelegate, AFDFullPageFeedContainerViewControllerDelegate>

@property (weak, nonatomic) UIViewController *container;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) AWESearchHomeDCFeedTransitionService *transitionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadFullPageFeedAdapterClass;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)fullPageFeedImageLoadFinishWithAweme:(id)a0 index:(long long)a1;
- (void)fullPageFeedViewDidDisappear:(id)a0;
- (id)tidyAwemeConfig;
- (id)coreEventList;
- (void)updateTransitionContextWithModel:(id)a0 startView:(id)a1 toContextProvider:(id)a2;
- (void)enterAlbumDetailAtIndexPath:(id)a0 withTidyModel:(id)a1 referString:(id)a2 selectedCell:(id)a3 logExtraDict:(id)a4;
- (id)aAWEPadFullPageFeedAdapter;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)enterAIOriginAtIndexPath:(id)a0 withModel:(id)a1 referString:(id)a2 selectedCell:(id)a3 logExtraDict:(id)a4;
- (void)defaultDidSelectItemAtIndexPath:(id)a0 model:(id)a1 selectedCell:(id)a2 logExtraDict:(id)a3 placeholderImage:(id)a4;
- (void)enterDetailVCAtIndexPath:(id)a0 withModel:(id)a1 referString:(id)a2 selectedCell:(id)a3 logExtraDict:(id)a4;
- (void)enterAlbumDetailAtIndexPath:(id)a0 withModel:(id)a1 referString:(id)a2 selectedCell:(id)a3 logExtraDict:(id)a4 placeholderImage:(id)a5;
- (id)albumDetailDefaultPayloadWithModel:(id)a0 referString:(id)a1;
- (void)handleEnterDetailVCWithTidyModel:(id)a0 innerDataController:(id)a1 detailController:(id)a2;
- (BOOL)getIsAwemeModelRelatedToQuery:(id)a0;
- (void).cxx_destruct;

@end
