@interface WeChat.WaterfallLayout : UICollectionViewLayout {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ numberOfColumns;
    void /* unknown type, empty encoding */ cellPadding;
    void /* unknown type, empty encoding */ contentHeight;
    void /* unknown type, empty encoding */ footerHeight;
    void /* unknown type, empty encoding */ cache;
    void /* unknown type, empty encoding */ footerCache;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)invalidateLayout;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
