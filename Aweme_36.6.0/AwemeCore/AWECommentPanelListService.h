@interface AWECommentPanelListService : NSObject <AWECommentPanelListServiceProtocol>

- (id)serviceViewModel:(long long)a0;
- (id)richContentService;
- (id)generateMediaFeedSectionViewModelArray:(id)a0 context:(id)a1;
- (id)makeCommentViewController;
- (id)makeManagerPageWithAwemeModel:(id)a0 pageContext:(id)a1;
- (id)makeCommentSummaryPage:(id)a0 opinionID:(id)a1 opinionText:(id)a2 pageContext:(id)a3;
- (id)commentListSectionControllerClassArray;
- (id)cellService;
- (id)sectionViewModelService;
- (id)commentReplyListViewControllerManagerWithParams:(id)a0;
- (id)businessCommentListServiceContainer:(id)a0 contextDelegate:(id)a1 serviceID:(long long)a2 colorMode:(unsigned long long)a3 businessExtraParams:(id)a4;
- (BOOL)showCommentDeleteAlertIfNeed:(BOOL)a0 comment:(id)a1 extra:(id)a2;
- (id)postCommentTracker;
- (id)inputViewMakeContextForMediaFeed:(id)a0 referString:(id)a1 interactionViewController:(id)a2 videoStateChangeDelegate:(id)a3;
- (id)makeCommentContext:(id)a0;
- (id)init;

@end
