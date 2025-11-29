@class NSIndexPath;

@interface AWERecordInspirationCommonSearchHistoryLeftAlignedFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) BOOL isExpandedStatus;
@property (nonatomic) BOOL shouldPlaceExpandButton;
@property (nonatomic) long long maxRowsCollapsed;
@property (retain, nonatomic) NSIndexPath *expandButtonIndexPath;

- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
