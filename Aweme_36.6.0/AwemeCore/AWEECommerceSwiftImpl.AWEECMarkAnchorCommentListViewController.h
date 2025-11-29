@interface AWEECommerceSwiftImpl.AWEECMarkAnchorCommentListViewController : AWEBaseListViewController <AWECommentSectionControllerContainerProtocol, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ commentVC;
    void /* unknown type, empty encoding */ commentInputView;
    void /* unknown type, empty encoding */ hideFooter;
    void /* unknown type, empty encoding */ showFooter;
    void /* unknown type, empty encoding */ footer;
    void /* unknown type, empty encoding */ footerNoMoreDataStringFromComment;
    void /* unknown type, empty encoding */ commentListScrollDownPreloadDataRemainingCellCountThreshold;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorEmptyPageConfig;
    void /* unknown type, empty encoding */ bindingStore;
    void /* unknown type, empty encoding */ _commentInputViewSetupBlock;
}

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (id)commentSectionControllerContainer;
- (id)commentSectionControllerContainerView;
- (id)commentSectionControllerContainerSectionModelsArray;
- (void)commentSectionControllerUpdateByFinalModels:(id)a0 actionModels:(id)a1 actionType:(unsigned long long)a2 animated:(BOOL)a3 sync:(BOOL)a4;
- (void)commentSectionControllerFooterTextDidUpdate:(id)a0 noMoreData:(BOOL)a1 hideFooter:(BOOL)a2;
- (BOOL)shouldConvertInputTopCoordinateToScrollViewForScrollToInputTop;
- (BOOL)allowScrollAfterReplyComment;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupCollectionView:(id)a0;

@end
