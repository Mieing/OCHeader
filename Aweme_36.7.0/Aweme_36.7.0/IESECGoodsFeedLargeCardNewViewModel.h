@class IESECGoodsDetailParameters;

@interface IESECGoodsFeedLargeCardNewViewModel : IESECGoodsFeedCellBaseViewModel

@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;

- (id)commonTrackParams;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (struct CGSize { double x0; double x1; })calculateCellSizeForContaineSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithModel:(id)a0 context:(id)a1 useToInsert:(BOOL)a2;
- (id)compareDealsBarCommonParams;
- (id)multiGroupBuyingState;
- (id)nGroupBuyType:(long long)a0;
- (void)recommendLargeCardViewModelWithModel:(id)a0;
- (void)productCardViewModelWithParams:(id)a0;
- (id)compareDealsProductId;
- (void)largeCardViewModelWithParams:(id)a0 isFirstCard:(BOOL)a1;
- (BOOL)isEqualToProductId:(id)a0;

@end
