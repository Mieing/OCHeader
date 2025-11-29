@interface FlowKit.FallsListCollectionLayout : UICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ rowsCount;
    void /* unknown type, empty encoding */ itemSpaceX;
    void /* unknown type, empty encoding */ itemSpaceY;
    void /* unknown type, empty encoding */ contentInset;
    void /* unknown type, empty encoding */ popupInset;
    void /* unknown type, empty encoding */ minItemRatio;
    void /* unknown type, empty encoding */ maxItemRatio;
    void /* unknown type, empty encoding */ preloadCellCount;
    void /* unknown type, empty encoding */ contentWidth;
    void /* unknown type, empty encoding */ customInsetTop;
    void /* unknown type, empty encoding */ layoutAttributes;
    void /* unknown type, empty encoding */ rowsHeights;
    void /* unknown type, empty encoding */ itemCountInRows;
    void /* unknown type, empty encoding */ itemWidth;
    void /* unknown type, empty encoding */ itemRowDict;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ useDefaultWCBLayout;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
