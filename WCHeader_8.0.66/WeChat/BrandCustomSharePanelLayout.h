@class NSMutableArray, BrandCustomSharePanelLayoutConfig;

@interface BrandCustomSharePanelLayout : UICollectionViewLayout

@property (retain, nonatomic) NSMutableArray *layoutAttributes;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) BrandCustomSharePanelLayoutConfig *config;

- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;

@end
