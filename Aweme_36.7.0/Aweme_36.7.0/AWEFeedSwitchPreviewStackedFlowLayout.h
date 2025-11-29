@class NSIndexPath;

@interface AWEFeedSwitchPreviewStackedFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) double contentOffsetWhenMiddle;
@property (nonatomic) double contentOffsetWhenRight;
@property (nonatomic) double maxContentOffset;
@property (nonatomic) double minContentOffset;
@property (nonatomic) double maxLittleCardLeftMargin;
@property (nonatomic) double defaultLittleCardLeftMargin;
@property (nonatomic) double bigCardRightMargin;
@property (nonatomic) double bigCardLeftMargin;
@property (nonatomic) double maxBigCardDistanceWhenLeft;
@property (nonatomic) double littleCardLeftMarginWhenRight;
@property (nonatomic) double bigCardLeftMarginWhenRight;
@property (nonatomic) double littleCardWidth;
@property (nonatomic) double littleCardHeight;
@property (nonatomic) double bigCardWidth;
@property (nonatomic) double bigCardHeight;
@property (nonatomic) double collectionViewWidth;
@property (nonatomic) double collectionViewHeight;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (nonatomic) unsigned long long layoutState;

- (void)applyCustomAnimationsToAttributes:(id)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)configLayout;

@end
