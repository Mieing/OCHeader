@class NSMutableArray, NSMutableDictionary;
@protocol GCCollectionWaterfallLayoutProtocol;

@interface GCCollectionWaterfallLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableArray *attributesArray;
@property (retain, nonatomic) NSMutableDictionary *attributesCacheDic;
@property (retain, nonatomic) NSMutableDictionary *supplementaryAttributesCacheDic;
@property (retain, nonatomic) NSMutableArray *columnHeights;
@property (weak, nonatomic) id<GCCollectionWaterfallLayoutProtocol> delegate;
@property (nonatomic) unsigned long long columns;
@property (nonatomic) double columnSpacing;
@property (nonatomic) double itemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;

- (id)init;
- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (long long)columnOfLessHeight;
- (long long)columnOfMostHeight;
- (void).cxx_destruct;

@end
