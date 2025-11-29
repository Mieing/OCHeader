@class NSMutableDictionary, UICollectionViewLayoutAttributes;

@interface WCFinderStreamLayoutSectionCache : NSObject

@property (nonatomic) double headerHeight;
@property (nonatomic) double cellsHeight;
@property (nonatomic) double footerHeight;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *headerAttr;
@property (retain, nonatomic) NSMutableDictionary *cellsAttr;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *footerAttr;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *decorationAttr;

- (id)init;
- (double)sectionHeight;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0;
- (void).cxx_destruct;

@end
