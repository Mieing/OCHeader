@class NSMutableDictionary, NSArray, CMTableViewAttributes, NSMutableArray;

@interface CMMarkdownTableViewLayout : UICollectionViewLayout

@property (retain, nonatomic) NSMutableDictionary *itemAttributes;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) NSMutableArray *rowMaxHeights;
@property (retain, nonatomic) NSMutableArray *columnMaxWidths;
@property (nonatomic, getter=isPreCalculated) BOOL preCalculated;
@property (retain, nonatomic) CMTableViewAttributes *attributes;
@property (retain, nonatomic) NSArray *tableInfos;

- (struct CGSize { double x0; double x1; })preCalculate;
- (id)initWithTableInfos:(id)a0 attributes:(id)a1;
- (void)calculateAttributedStrSizes;
- (void)calculateLayoutAttributes;
- (id)attributedStrAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
