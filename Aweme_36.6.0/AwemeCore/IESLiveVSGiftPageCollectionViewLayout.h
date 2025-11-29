@interface IESLiveVSGiftPageCollectionViewLayout : UICollectionViewLayout

@property (nonatomic) long long cellCount;
@property (nonatomic) long long pageCount;
@property (nonatomic) double sectionInsertLeft;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) long long rowsPerPage;
@property (nonatomic) long long columnsPerPage;
@property (nonatomic) double pagingIndicatorHeight;
@property (nonatomic) long long rowsCount;
@property (nonatomic) long long colsCount;

- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
