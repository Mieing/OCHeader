@class NSArray;
@protocol AWEGrouponLifeFeedsBodyLayoutDataSource;

@interface AWEGrouponLifeFeedsBodyLayout : UICollectionViewLayout

@property (retain, nonatomic) NSArray *attributesList;
@property (nonatomic) double contentHeight;
@property (weak, nonatomic) id<AWEGrouponLifeFeedsBodyLayoutDataSource> dataSource;

- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
