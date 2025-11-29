@interface AWENewScanImpl.QRCodeScanFullScreenView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, NSObject, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ triggerDirection;
    void /* unknown type, empty encoding */ lastContentOffsetX;
    void /* unknown type, empty encoding */ pageSwitchFromGoods;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_flowLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scanningView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fullScreenMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_qrCodeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_albumButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topDescLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_goodsView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_switchGestureRecognizer;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)handleGestureWithRecognizer:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
