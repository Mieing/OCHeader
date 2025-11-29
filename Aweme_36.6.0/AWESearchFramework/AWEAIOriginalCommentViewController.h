@class AWEAIOriginalPageContext, NSString, UIView, UIViewController;
@protocol AWEAIOriginalContainerViewControllerProtocol, AWECommentListViewControllerProtocol, AWECommentInputViewProtocol;

@interface AWEAIOriginalCommentViewController : AWEBaseListViewController <AWECommentSectionControllerContainerProtocol, UIScrollViewDelegate>

@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (weak, nonatomic) UIViewController<AWEAIOriginalContainerViewControllerProtocol> *containerVC;
@property (retain, nonatomic) AWEAIOriginalPageContext *pageContext;
@property (weak, nonatomic) UIView<AWECommentInputViewProtocol> *commentInputView;
@property (nonatomic) BOOL commentHasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (id)commentSectionControllerContainer;
- (id)commentSectionControllerContainerView;
- (id)commentSectionControllerContainerSectionModelsArray;
- (void)commentSectionControllerUpdateByFinalModels:(id)a0 actionModels:(id)a1 actionType:(unsigned long long)a2 animated:(BOOL)a3 sync:(BOOL)a4;
- (void)commentSectionControllerFooterTextDidUpdate:(id)a0 noMoreData:(BOOL)a1 hideFooter:(BOOL)a2;
- (BOOL)allowScrollToInputTop;
- (BOOL)allowScrollAfterReplyComment;
- (void)enableScroll:(BOOL)a0;
- (void)startInputWithSource:(unsigned long long)a0;
- (void)setupTrackerTransmissionInfo;
- (id)commentRequestParams;
- (void)commentLoadMoreIfNeeded;
- (id)initWithPageContext:(id)a0 containerVC:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })currentContentSize;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupCollectionView:(id)a0;

@end
