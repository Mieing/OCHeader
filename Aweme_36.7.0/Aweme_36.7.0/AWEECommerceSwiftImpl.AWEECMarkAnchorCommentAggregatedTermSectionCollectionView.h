@interface AWEECommerceSwiftImpl.AWEECMarkAnchorCommentAggregatedTermSectionCollectionView : UICollectionViewCell <UICollectionViewDelegate, AWEECommerceSwiftImpl.AWEECCollectionViewDelegateWaterfallLayout, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ didSetupUI;
    void /* unknown type, empty encoding */ _viewModel;
}

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAt:(id)a2;
- (long long)collectionView:(id)a0 layout:(id)a1 columnCountFor:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (void)layoutSubviews;

@end
