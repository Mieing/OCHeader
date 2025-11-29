@interface FlowKitBizUI.MessageImagesCell : FlowKitBizUI.MessageCell <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ botId;
    void /* unknown type, empty encoding */ imageSize;
    void /* unknown type, empty encoding */ isImmersiveMode;
    void /* unknown type, empty encoding */ isNotCompliant;
    void /* unknown type, empty encoding */ configItemCell;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ selectedIndexPath;
    void /* unknown type, empty encoding */ canRegen;
    void /* unknown type, empty encoding */ imageUploadIndicatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nonComplianceView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
