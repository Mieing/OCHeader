@interface AWECommentSwiftBizUI.CommentHorizontalMultiImageView : UIView <UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ draggable;
    void /* unknown type, empty encoding */ isEnableLongPress;
    void /* unknown type, empty encoding */ isScrollEnabled;
    void /* unknown type, empty encoding */ multipleRows;
    void /* unknown type, empty encoding */ canDeleteItem;
    void /* unknown type, empty encoding */ needMaskLayer;
    void /* unknown type, empty encoding */ isColorWhite;
    void /* unknown type, empty encoding */ externCenterViewList;
    void /* unknown type, empty encoding */ needDisplayProgressView;
    void /* unknown type, empty encoding */ isReOrdering;
    void /* unknown type, empty encoding */ multiImageModel;
    void /* unknown type, empty encoding */ imageActionBlockFromExtern;
    void /* unknown type, empty encoding */ currentEdgeCellIndex;
    void /* unknown type, empty encoding */ shouldShowEdge;
    void /* unknown type, empty encoding */ shouldCorrectCellPositionWhenDragging;
    void /* unknown type, empty encoding */ isDeleteButtonPreventTap;
    void /* unknown type, empty encoding */ imageLongPressBlockFromExtern;
    void /* unknown type, empty encoding */ dragGesture;
    void /* unknown type, empty encoding */ longPressGes;
    void /* unknown type, empty encoding */ zoomImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_defalutMultiImageCountLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapGesture;
}

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)a1 atCurrentIndexPath:(id)a2 toProposedIndexPath:(id)a3;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dragActionWithGes:(id)a0;
- (void)longPressActionWithGes:(id)a0;
- (void)collectionViewTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
