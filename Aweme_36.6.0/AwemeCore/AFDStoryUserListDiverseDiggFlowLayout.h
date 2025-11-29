@class NSArray;
@protocol AFDStoryUserListDiverseDiggFlowLayoutDelegate;

@interface AFDStoryUserListDiverseDiggFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSArray *layoutAttributes;
@property (nonatomic) double totalHeight;
@property (weak, nonatomic) id<AFDStoryUserListDiverseDiggFlowLayoutDelegate> delegate;

+ (id)calculateLayoutWithModel:(id)a0 contentWidth:(double)a1 collectionWidthLeadingInset:(double)a2;
+ (double)calculateHeightWithModel:(id)a0 collectionWidth:(double)a1 collectionWidthLeadingInset:(double)a2;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
