@interface FlowCommon.FlowMenuView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ actions;
    void /* unknown type, empty encoding */ flowMenuViewMinWidth;
    void /* unknown type, empty encoding */ flowMenuViewMaxWidth;
    void /* unknown type, empty encoding */ flowMenuCornerRadius;
    void /* unknown type, empty encoding */ iconLength;
    void /* unknown type, empty encoding */ willDismissCallback;
    void /* unknown type, empty encoding */ didDismissCallback;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundShadowView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)handelGesture:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
