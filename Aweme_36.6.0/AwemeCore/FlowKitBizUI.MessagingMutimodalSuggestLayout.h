@interface FlowKitBizUI.MessagingMutimodalSuggestLayout : UICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ itemSpace;
    void /* unknown type, empty encoding */ rows;
    void /* unknown type, empty encoding */ containerHeight;
    void /* unknown type, empty encoding */ lineWidth;
    void /* unknown type, empty encoding */ layoutAttributes;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
