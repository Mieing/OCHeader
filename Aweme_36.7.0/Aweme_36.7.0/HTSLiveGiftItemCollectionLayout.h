@interface HTSLiveGiftItemCollectionLayout : UICollectionViewLayout

@property (nonatomic) long long cellCount;
@property (nonatomic) long long pageCount;
@property (nonatomic) double sectionInsertLeft;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) BOOL useMultiSection;
@property (nonatomic) BOOL shouldShowMostlyUsedHeader;
@property (nonatomic) double headerInsertLeft;
@property (nonatomic) double contentTopOffset;
@property (nonatomic) struct CGSize { double width; double height; } headerSize;
@property (nonatomic) struct CGSize { double width; double height; } footerSize;
@property (nonatomic) double sectionTopAndBottomOffset;
@property (nonatomic) BOOL enablePaging;
@property (nonatomic) long long direction;
@property (nonatomic) long long rowsPerPage;
@property (nonatomic) long long columnsPerPage;
@property (nonatomic) double pagingIndicatorHeight;
@property (nonatomic) long long rowsCount;
@property (nonatomic) long long colsCount;

- (double)sectionHeightForSection:(long long)a0;
- (double)sectionYOffsetForSection:(long long)a0;
- (double)itemRowsHeightForSection:(long long)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
