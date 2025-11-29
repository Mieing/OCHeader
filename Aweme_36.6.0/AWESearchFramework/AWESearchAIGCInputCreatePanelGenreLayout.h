@class NSArray;

@interface AWESearchAIGCInputCreatePanelGenreLayout : UICollectionViewFlowLayout

@property (nonatomic) struct CGSize { double width; double height; } currentContentSize;
@property (copy, nonatomic) NSArray *attributesArray;
@property (nonatomic) long long numberOfRows;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
