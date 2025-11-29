@interface IESECCollectionViewSectionStickyLayout : IESECCollectionViewSectionLayout

@property (nonatomic) BOOL defaultHidden;
@property (nonatomic) double offset;
@property (nonatomic) double contentHeight;
@property (nonatomic) BOOL isStickied;
@property (nonatomic) double stickyOriginY;

- (BOOL)shouldInvalidateLayout;
- (id)sectionLayoutForSection:(long long)a0;
- (id)prepareSectionItemLayoutAttributes;
- (double)sectionContentHeight;
- (id)prepareSectionLayoutAttribute;
- (double)stickHeightForHeader;
- (double)sectionStickHeight;
- (BOOL)invalidateLayoutWithContext:(id)a0;
- (id)initWithConfig:(id)a0;
- (double)sectionHeight;

@end
