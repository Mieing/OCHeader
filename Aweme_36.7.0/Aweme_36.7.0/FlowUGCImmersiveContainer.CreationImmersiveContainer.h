@interface FlowUGCImmersiveContainer.CreationImmersiveContainer : UIView <UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ inScrollGesture;
    void /* unknown type, empty encoding */ lastNotifyCurrentIndex;
    void /* unknown type, empty encoding */ didSwitchTypeWhenDismissing;
    void /* unknown type, empty encoding */ internalModel;
    void /* unknown type, empty encoding */ currentCell;
    void /* unknown type, empty encoding */ weakCellContainer;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
