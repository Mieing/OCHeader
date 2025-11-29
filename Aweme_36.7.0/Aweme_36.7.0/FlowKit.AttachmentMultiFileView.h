@interface FlowKit.AttachmentMultiFileView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ addBlock;
    void /* unknown type, empty encoding */ deleteBlock;
    void /* unknown type, empty encoding */ retryBlock;
    void /* unknown type, empty encoding */ cellTapBlock;
    void /* unknown type, empty encoding */ cellModelDidChangeBlock;
    void /* unknown type, empty encoding */ updateBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ delayScrollFlag;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
