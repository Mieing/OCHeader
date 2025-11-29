@interface AWECommentLongPressPanelSwiftImpl.CommentLongPressPanelHorizontalCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setUpCollectionView;

@end
