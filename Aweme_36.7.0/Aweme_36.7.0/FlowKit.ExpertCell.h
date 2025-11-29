@interface FlowKit.ExpertCell : FlowKitBizUI.MessageCell <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ originalMessage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expertBubbleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_customStatusView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ delegate;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
