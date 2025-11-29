@interface FlowKitBizUI.MessageNestedCell : FlowKitBizUI.MessageCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ needShowBeautifyEntrance;
    void /* unknown type, empty encoding */ onLayoutSubviewsBlock;
    void /* unknown type, empty encoding */ tapBlock;
    void /* unknown type, empty encoding */ retryBlock;
    void /* unknown type, empty encoding */ trackBeautyShow;
    void /* unknown type, empty encoding */ onTapBeautifyImage;
    void /* unknown type, empty encoding */ cellModelDidChangeBlock;
    void /* unknown type, empty encoding */ contentSizeObservation;
    void /* unknown type, empty encoding */ isImmersiveMode;
    void /* unknown type, empty encoding */ lastFrame;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionViewLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leadingGradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_trailingGradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nonComplianceView;
}

- (void)adapterToSnapshotWithCtx:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;

@end
