@interface AWECommentPanelListSwiftImpl.CommentViewFlowLayout : AWEBaseListFlowLayout {
    void /* unknown type, empty encoding */ foldedHeight;
    void /* unknown type, empty encoding */ targetOffset;
    void /* unknown type, empty encoding */ oldContentSize;
    void /* unknown type, empty encoding */ previousContentOffset;
    void /* unknown type, empty encoding */ needForceLayoutHeight;
    void /* unknown type, empty encoding */ forceLayoutHeight;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (BOOL)rx_needsDelegateProxy;
- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)finalizeCollectionViewUpdates;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
