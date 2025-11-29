@class NSArray, UICollectionView, IESECCollectionViewLayoutAttributes, IESECCollectionViewSectionConfig, NSMutableArray;
@protocol IESECCollectionViewLayoutDelegate;

@interface IESECCollectionViewSectionLayout : NSObject

@property (nonatomic) long long section;
@property (nonatomic) double sectionOriginY;
@property (retain, nonatomic) NSArray *itemAttributes;
@property (retain, nonatomic) IESECCollectionViewLayoutAttributes *sectionLayoutAttribute;
@property (retain, nonatomic) IESECCollectionViewLayoutAttributes *sectionSupplementViewLayoutAttribute;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<IESECCollectionViewLayoutDelegate> delegate;
@property (retain, nonatomic) IESECCollectionViewSectionConfig *config;
@property (retain, nonatomic) NSMutableArray *calculateAttr;

- (BOOL)shouldInvalidateLayout;
- (id)layoutAttributesForItemAtIndex:(long long)a0;
- (id)layoutAttributesForItemAtIndexInCalculate:(long long)a0;
- (id)prepareSectionItemLayoutAttributes;
- (double)sectionContentHeight;
- (id)prepareSectionLayoutAttribute;
- (id)prepareSectionSupplementViewLayoutAttribute;
- (void).cxx_destruct;
- (BOOL)invalidateLayoutWithContext:(id)a0;
- (void)prepareLayout;
- (id)initWithConfig:(id)a0;
- (double)sectionHeight;

@end
