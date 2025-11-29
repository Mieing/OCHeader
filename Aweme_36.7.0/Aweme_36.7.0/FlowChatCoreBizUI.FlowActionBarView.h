@interface FlowChatCoreBizUI.FlowActionBarView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ discoveryAction;
    void /* unknown type, empty encoding */ actionItemTapAction;
    void /* unknown type, empty encoding */ actionItemsReordered;
    void /* unknown type, empty encoding */ closeViewBlock;
    void /* unknown type, empty encoding */ needShowDeepThinkingTipsAction;
    void /* unknown type, empty encoding */ hiddenObservation;
    void /* unknown type, empty encoding */ lastFrameWidth;
    void /* unknown type, empty encoding */ contentSizeObservation;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
    void /* unknown type, empty encoding */ exposureItemSet;
    void /* unknown type, empty encoding */ cellModels;
    void /* unknown type, empty encoding */ firstRedDotIndex;
    void /* unknown type, empty encoding */ redDotAnimated;
    void /* unknown type, empty encoding */ reloadAnimating;
    void /* unknown type, empty encoding */ shouldReloadAfterRedDotAnimation;
    void /* unknown type, empty encoding */ userDragged;
    void /* unknown type, empty encoding */ fixedCellSize;
    void /* unknown type, empty encoding */ redDotAnimationWrapper;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lineView;
    void /* unknown type, empty encoding */ reuseIdentifierToClass;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionViewLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionViewUnderlay;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_executeOnce;
}

- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handleLongPressGestureWithGesture:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
