@interface CAKAIMemoriesSkeletonView : UIView <UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ kAnimationDuration;
    void /* unknown type, empty encoding */ kBigSectionItemWidth;
    void /* unknown type, empty encoding */ kBigSectionItemHeight;
    void /* unknown type, empty encoding */ kSmallSectionItemLength;
    void /* unknown type, empty encoding */ kSectionLeadingOffset;
    void /* unknown type, empty encoding */ kSectionTrailingOffset;
    void /* unknown type, empty encoding */ kBigSectionCellCornerRadius;
    void /* unknown type, empty encoding */ kSmallSectionCellCornerRadius;
    void /* unknown type, empty encoding */ kTitleWidth;
    void /* unknown type, empty encoding */ kTitleHeight;
    void /* unknown type, empty encoding */ kBigSectionItemSpacing;
    void /* unknown type, empty encoding */ kSmallSectionItemSpacing;
    void /* unknown type, empty encoding */ kFlashViewIconName;
    void /* unknown type, empty encoding */ kFlashAnimationKey;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ flashImageView;
}

@property (nonatomic) BOOL isAnimating;

- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
