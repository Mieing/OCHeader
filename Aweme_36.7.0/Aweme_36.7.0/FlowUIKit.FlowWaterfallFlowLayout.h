@interface FlowUIKit.FlowWaterfallFlowLayout : UICollectionViewLayout {
    void /* unknown type, empty encoding */ scrollDirection;
    void /* unknown type, empty encoding */ layoutStyle;
    void /* unknown type, empty encoding */ interitemCount;
    void /* unknown type, empty encoding */ minimumLineSpacing;
    void /* unknown type, empty encoding */ minimumInteritemSpacing;
    void /* unknown type, empty encoding */ sectionInset;
    void /* unknown type, empty encoding */ isShowHeader;
    void /* unknown type, empty encoding */ isShowFooter;
    void /* unknown type, empty encoding */ headerReferenceSize;
    void /* unknown type, empty encoding */ footerReferenceSize;
    void /* unknown type, empty encoding */ spacingWithPreviousSection;
    void /* unknown type, empty encoding */ contentScope;
    void /* unknown type, empty encoding */ $__lazy_storage_$_layoutAttributes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_interitemScopeSizes;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
