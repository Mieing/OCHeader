@interface AFDAlbumPreviewFlowLayout : UICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ layoutAttributes;
    void /* unknown type, empty encoding */ normalCellSize;
    void /* unknown type, empty encoding */ selectedCellSize;
    void /* unknown type, empty encoding */ spacing;
    void /* unknown type, empty encoding */ contentSize;
}

@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
