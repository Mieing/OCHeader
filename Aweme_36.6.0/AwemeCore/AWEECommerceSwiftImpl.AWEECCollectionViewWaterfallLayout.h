@interface AWEECommerceSwiftImpl.AWEECCollectionViewWaterfallLayout : UICollectionViewLayout {
    void /* unknown type, empty encoding */ columnCount;
    void /* unknown type, empty encoding */ minimumColumnSpacing;
    void /* unknown type, empty encoding */ minimumInteritemSpacing;
    void /* unknown type, empty encoding */ headerMainAxisLength;
    void /* unknown type, empty encoding */ footerMainAxisLength;
    void /* unknown type, empty encoding */ sectionInset;
    void /* unknown type, empty encoding */ scrollDirection;
    void /* unknown type, empty encoding */ itemRenderDirection;
    void /* unknown type, empty encoding */ sectionInsetReference;
    void /* unknown type, empty encoding */ sectionColumnMainAxisLengths;
    void /* unknown type, empty encoding */ sectionItemAttributes;
    void /* unknown type, empty encoding */ allItemAttributes;
    void /* unknown type, empty encoding */ headersAttributes;
    void /* unknown type, empty encoding */ footersAttributes;
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
