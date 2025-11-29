@interface FlowKitBizUI.MessageTrailSuggestCell : FlowKitBizUI.MessageCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ numberOfSuggestsItems;
    void /* unknown type, empty encoding */ configurationItemCell;
    void /* unknown type, empty encoding */ didSelectItemCell;
    void /* unknown type, empty encoding */ botId;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
