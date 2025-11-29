@interface FlowKitBizUI.MessageDeepThinkingContainer : UIView <UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ contentContainerView;
    void /* unknown type, empty encoding */ contentScrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ listBottomView;
    void /* unknown type, empty encoding */ guideLineBgView;
    void /* unknown type, empty encoding */ guideLineView;
    void /* unknown type, empty encoding */ markdownView;
    void /* unknown type, empty encoding */ markdownBottomView;
    void /* unknown type, empty encoding */ separator;
    void /* unknown type, empty encoding */ currentMarkdownContent;
    void /* unknown type, empty encoding */ currentMarkdownSendingFinished;
    void /* unknown type, empty encoding */ isLastFold;
    void /* unknown type, empty encoding */ mainSection;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ titleColorAnimateDisplayLink;
    void /* unknown type, empty encoding */ titleColorAnimateStartDate;
    void /* unknown type, empty encoding */ readyToAnimateList;
    void /* unknown type, empty encoding */ supportHalfExpanded;
    void /* unknown type, empty encoding */ isHalfExpanded;
    void /* unknown type, empty encoding */ referenceIsFold;
    void /* unknown type, empty encoding */ showMarkdownBottomView;
    void /* unknown type, empty encoding */ showReference;
    void /* unknown type, empty encoding */ visibleRectWithMarkdownView;
    void /* unknown type, empty encoding */ sizeForItemBlock;
    void /* unknown type, empty encoding */ didSelectClosure;
    void /* unknown type, empty encoding */ dataReadyClosure;
    void /* unknown type, empty encoding */ didClickReferenceMore;
    void /* unknown type, empty encoding */ didClickExpansionAll;
}

- (void)animateDisplay;
- (void)handleTapBottomView:(id)a0;
- (void)handleTapMarkdownContainerView:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
