@class NSArray;

@interface AWEAICreateEffectsKeyWordsLayout : UICollectionViewFlowLayout

@property (nonatomic) struct CGSize { double width; double height; } currentContentSize;
@property (copy, nonatomic) NSArray *attributesArray;
@property (copy, nonatomic) NSArray *headerAttributesArray;
@property (copy, nonatomic) NSArray *footerAttributesArray;
@property (nonatomic) double maxY;
@property (nonatomic) long long numberOfRows;
@property (nonatomic) double spacingX;
@property (nonatomic) double SpacingY;
@property (nonatomic) long long row;
@property (nonatomic) double leftSpace;
@property (nonatomic) long long enterPageFrom;

- (id)flowLayoutDelegate;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithScene:(long long)a0;

@end
