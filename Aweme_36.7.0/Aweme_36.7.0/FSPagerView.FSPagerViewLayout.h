@interface FSPagerView.FSPagerViewLayout : UICollectionViewLayout {
    void /* unknown type, empty encoding */ contentSize;
    void /* unknown type, empty encoding */ leadingSpacing;
    void /* unknown type, empty encoding */ itemSpacing;
    void /* unknown type, empty encoding */ needsReprepare;
    void /* unknown type, empty encoding */ scrollDirection;
    void /* unknown type, empty encoding */ collectionViewSize;
    void /* unknown type, empty encoding */ numberOfSections;
    void /* unknown type, empty encoding */ numberOfItems;
    void /* unknown type, empty encoding */ actualInteritemSpacing;
    void /* unknown type, empty encoding */ actualItemSize;
}

@property (class, nonatomic, readonly) Class layoutAttributesClass;

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (void)didReceiveNotificationWithNotification:(id)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
