@class NSArray, NSMutableArray;

@interface IESECCollectionViewSectionWaterfallLayout : IESECCollectionViewSectionLayout

@property (nonatomic) double contentHeight;
@property (nonatomic) long long itemCount;
@property (retain, nonatomic) NSMutableArray *colHeights;
@property (nonatomic) unsigned long long layoutOrder;
@property (nonatomic) double totalGap;
@property (nonatomic) double contentWidth;
@property (nonatomic) double itemWidth;
@property (copy, nonatomic) NSArray *cachedItemArray;
@property (copy, nonatomic) NSArray *cachedColHeightArray;

- (unsigned long long)longestColumnIndex;
- (unsigned long long)shortestColumnIndex;
- (id)prepareSectionItemLayoutAttributes;
- (double)sectionContentHeight;
- (unsigned long long)nextColumnIndexForItem:(long long)a0;
- (void)setCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
