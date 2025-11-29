@class IESECWinRouterData, IESECWinMultiGoodsDiffableModel, IESECTracker;

@interface IESECCommonGoodsListHandler : NSObject

@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECWinRouterData *context;
@property (retain, nonatomic) IESECWinMultiGoodsDiffableModel *model;
@property (nonatomic) long long productTabStyle;
@property (nonatomic) BOOL isSearchPage;
@property (nonatomic) BOOL isWinSearch;
@property (nonatomic) BOOL willGoToGoodsDetail;
@property (nonatomic) long long scene;

- (id)commonEntranceInfoDictWithViewModel:(id)a0 extraParams:(id)a1;
- (id)trackClickProductWithGoodsModel:(id)a0 extraParams:(id)a1 cell:(id)a2 btmInfo:(id)a3 btmID:(id)a4;
- (id)getGoodsDetailShowRequestWithGoodsModel:(id)a0 extraParams:(id)a1 viewController:(id)a2;
- (id)singleColSectionConfig;
- (id)doubleColSectionConfig;
- (id)defaultSectionConfig;
- (id)getSectionConfig;
- (void)handleWithGoodsDetailShowRequest:(id)a0 goodsModel:(id)a1 cell:(id)a2 btmInfo:(id)a3 extraParams:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
