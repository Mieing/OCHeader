@class IESECShopContext, IESECShopMultiGoodsDiffableModel, IESECTracker;

@interface IESECShopCommonGoodsListHandler : NSObject

@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECShopContext *context;
@property (retain, nonatomic) IESECShopMultiGoodsDiffableModel *model;
@property (nonatomic) long long productTabStyle;
@property (nonatomic) BOOL isSearchPage;
@property (nonatomic) BOOL isWinSearch;
@property (nonatomic) BOOL willGoToGoodsDetail;
@property (nonatomic) long long scene;

- (id)commonEntranceInfoDictWithViewModel:(id)a0 extraParams:(id)a1;
- (id)trackClickProductWithGoodsModel:(id)a0 extraParams:(id)a1 cell:(id)a2 btmInfo:(id)a3 btmID:(id)a4;
- (id)getGoodsDetailShowRequestWithGoodsModel:(id)a0 extraParams:(id)a1 viewController:(id)a2;
- (double)titleLabelHeightForGoods:(id)a0 width:(double)a1;
- (id)singleColSectionConfig;
- (id)doubleColSectionConfig;
- (id)defaultSectionConfig;
- (struct CGSize { double x0; double x1; })getSizeForItemWithGoodsModel:(id)a0 sectionLayout:(id)a1;
- (id)getSectionConfig;
- (void)handleWithGoodsDetailShowRequest:(id)a0 goodsModel:(id)a1 cell:(id)a2 btmInfo:(id)a3 extraParams:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
