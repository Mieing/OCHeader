@interface AWEDCFeedSwitchPreviewVerticalLayout : UICollectionViewFlowLayout

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } collectionViewSize;

@property (nonatomic) double collectionViewWidth;
@property (nonatomic) double collectionViewHeight;
@property (nonatomic) double littleCardWidth;
@property (nonatomic) double littleCardHeight;
@property (nonatomic) double bigCardWidth;
@property (nonatomic) double bigCardHeight;
@property (nonatomic) double littleCardLeftPadding;
@property (nonatomic) double bigCardLeftPadding;
@property (nonatomic) double minTopPadding;
@property (nonatomic) double defaultTopPadding;
@property (nonatomic) double maxTopPadding;
@property (nonatomic) double bigCardDefaultTopPadding;
@property (nonatomic) double bigCardMaxTop;
@property (nonatomic) double springBigCardMaxTop;
@property (nonatomic) double cardUpVelocityRatio;
@property (nonatomic) double cardDownVelocityRatio;
@property (nonatomic) double bigCardMaxContentOffset;
@property (nonatomic) double generalBigCardMaxContentOffset;

- (void)updateContentOffsetWhenScrollViewDidScroll:(id)a0;
- (void)updateContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)applyCustomAnimationsToAttributes:(id)a0;
- (double)contentCardSafeHeight;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)configLayout;

@end
