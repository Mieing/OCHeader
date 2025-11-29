@class NSMutableArray;

@interface IESECCollectionViewSectionColumnLayout : IESECCollectionViewSectionLayout

@property (nonatomic) double contentHeight;
@property (nonatomic) double totalWeight;
@property (retain, nonatomic) NSMutableArray *weights;
@property (nonatomic) double totalGap;
@property (nonatomic) double contentWidth;
@property (retain, nonatomic) NSMutableArray *itemsWidth;

- (id)initWithConfig:(id)a0 weightDic:(id)a1;
- (void)buildWeightsWithWeightDic:(id)a0;
- (id)prepareSectionItemLayoutAttributes;
- (double)sectionContentHeight;
- (void)setCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
