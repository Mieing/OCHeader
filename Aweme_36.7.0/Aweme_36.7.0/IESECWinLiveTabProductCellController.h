@interface IESECWinLiveTabProductCellController : IESECWinLivingProductSectionController

+ (Class)cellModelClass;
+ (Class)cellClass;

- (void)configCell;
- (double)heightForModel:(id)a0 itemWidth:(double)a1 bffItemData:(id)a2;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;

@end
