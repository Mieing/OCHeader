@class AWESearchGoodsLeaderboardView, AWESearchGoodsRecommendPriceView, AWEDoubleColumnSearchMerchandiseModel, AWESearchGoodPriceView, AWESearchGoodsComparePriceView, NSDictionary, AWESearchGoodsSearchWordView, AWESearchEcommerceActionRecord, AWESearchGoodsShopView, AWESearchIconRecommendAreaView;

@interface AWESearchMerchandiseGoodsInfoView : UIView

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (copy, nonatomic) NSDictionary *searchInfoDict;
@property (retain, nonatomic) AWESearchEcommerceActionRecord *actionRecord;
@property (retain, nonatomic) AWESearchGoodsShopView *shopView;
@property (retain, nonatomic) AWESearchGoodsComparePriceView *comparePriceView;
@property (retain, nonatomic) AWESearchGoodsLeaderboardView *leaderboardView;
@property (retain, nonatomic) AWESearchIconRecommendAreaView *iconRecommendAreaView;
@property (retain, nonatomic) AWESearchGoodsSearchWordView *searchWordView;
@property (retain, nonatomic) AWESearchGoodsRecommendPriceView *recommendPriceView;
@property (retain, nonatomic) AWESearchGoodPriceView *goodPriceView;

- (void)configWithModel:(id)a0;
- (unsigned long long)titleLabelLines;
- (void)trackStoreEntranceShow;
- (void)trackLeaderBoardShow;
- (void)trackCouponServiceShow;
- (void)trackWordShow;
- (void)trackBidInfoShow;
- (void)trackComparePriceShow;
- (void)jumpSku;
- (void)clickLeaderboardTrack;
- (void)clickWindowTrack;
- (void)clickShopTrack;
- (void)clickComparePrice;
- (void)trackLeaderBoardClick;
- (void)merchandiseClickProductTrack;
- (id)btmForCellType:(long long)a0;
- (id)getNewSkuSchema;
- (id)getSearchResultId;
- (void).cxx_destruct;

@end
