@interface BDXCategoryTitleVerticalZoomView : BDXCategoryTitleView

@property (nonatomic) double currentVerticalScale;
@property (nonatomic) double maxVerticalFontScale;
@property (nonatomic) double minVerticalFontScale;
@property (nonatomic) double maxVerticalCellSpacing;
@property (nonatomic) double minVerticalCellSpacing;

- (void)initializeData;
- (void)refreshDataSource;
- (void)refreshCellModel:(id)a0 index:(long long)a1;
- (Class)preferredCellClass;
- (void)listDidScrollWithVerticalHeightPercent:(double)a0;

@end
