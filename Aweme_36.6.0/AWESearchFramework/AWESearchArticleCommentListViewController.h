@class AWESearchArticleDetailPageContext, NSString, UIView, UIViewController;
@protocol AWECommentInputViewProtocol, AWECommentListViewControllerProtocol;

@interface AWESearchArticleCommentListViewController : AWEBaseListViewController <AWECommentSectionControllerContainerProtocol, UIScrollViewDelegate, AWEListSectionControllerDelegate, AWECommentControlVideoStateProtocol, AWETabListItemViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (weak, nonatomic) AWESearchArticleDetailPageContext *pageContext;
@property (weak, nonatomic) UIView<AWECommentInputViewProtocol> *commentInputView;
@property (nonatomic) BOOL commentHasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabContentScrollView;
- (void)sectionControllerWillEnterWorkingRange:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (BOOL)recoverPlayIfPauseByComment;
- (BOOL)pauseVideoIfPlaying;
- (BOOL)commentPlayControlEnable;
- (id)commentSectionControllerContainer;
- (id)commentSectionControllerContainerView;
- (id)commentSectionControllerContainerSectionModelsArray;
- (void)commentSectionControllerUpdateByFinalModels:(id)a0 actionModels:(id)a1 actionType:(unsigned long long)a2 animated:(BOOL)a3 sync:(BOOL)a4;
- (void)commentSectionControllerFooterTextDidUpdate:(id)a0 noMoreData:(BOOL)a1 hideFooter:(BOOL)a2;
- (id)commentSectionControllerContainerActualScrollview;
- (BOOL)allowScrollToInputTop;
- (BOOL)allowScrollAfterReplyComment;
- (id)commonTrackParams;
- (void)startInputWithSource:(unsigned long long)a0;
- (void)setupTrackerTransmissionInfo;
- (void)commentLoadMoreIfNeeded;
- (void)setupCommentVC;
- (void)bindPageContext:(id)a0;
- (void)startInputWithMethod:(long long)a0;
- (void)handleCommentAddNotification:(id)a0;
- (double)firstCommentOffset;
- (void)updateCommentListLayout;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)setupObservers;
- (BOOL)scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
