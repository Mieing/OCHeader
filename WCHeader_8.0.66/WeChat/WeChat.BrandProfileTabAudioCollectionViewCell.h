@interface WeChat.BrandProfileTabAudioCollectionViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;

@end
