@interface IESECBFFRowSectionLayout : IESECCollectionViewSectionLayout

@property (nonatomic) double contentHeight;
@property (nonatomic) long long itemCount;
@property (nonatomic) double totalRowGap;
@property (nonatomic) double contentWidth;

- (id)prepareSectionItemLayoutAttributes;
- (double)sectionContentHeight;
- (void)setCollectionView:(id)a0;
- (id)initWithConfig:(id)a0;

@end
