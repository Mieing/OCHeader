@interface CAKAIMemoriesSearchListColletionSkeletonView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ flowLayout;
    void /* unknown type, empty encoding */ kAnimationDuration;
    void /* unknown type, empty encoding */ kNumberOfColumns;
    void /* unknown type, empty encoding */ kInteritemSpacing;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

@property (nonatomic) BOOL isAnimating;

- (void)collectionView:(id)a0 didEndDisplayingSupplementaryView:(id)a1 forElementOfKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flowLayout:(id)a1;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
