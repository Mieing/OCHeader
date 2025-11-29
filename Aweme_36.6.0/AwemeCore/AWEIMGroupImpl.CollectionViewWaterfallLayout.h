@interface AWEIMGroupImpl.CollectionViewWaterfallLayout : UICollectionViewLayout {
    void /* unknown type, empty encoding */ columnCount;
    void /* unknown type, empty encoding */ minimumColumnSpacing;
    void /* unknown type, empty encoding */ minimumInteritemSpacing;
    void /* unknown type, empty encoding */ headerHeight;
    void /* unknown type, empty encoding */ footerHeight;
    void /* unknown type, empty encoding */ headerInset;
    void /* unknown type, empty encoding */ footerInset;
    void /* unknown type, empty encoding */ sectionInset;
    void /* unknown type, empty encoding */ columnHeights;
    void /* unknown type, empty encoding */ sectionItemAttributes;
    void /* unknown type, empty encoding */ headersAttribute;
    void /* unknown type, empty encoding */ footersAttribute;
    void /* unknown type, empty encoding */ allItemAttributes;
    void /* unknown type, empty encoding */ unionRects;
    void /* unknown type, empty encoding */ unionSize;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
