@class IESECServiceProxy, IESECWinGoodsObject, NSString;
@protocol IESECWinDataService, IESECWinGoodsService, IESECWinTabLayoutService, IESECWinPageCardService, IESECWinLiveService, IESECWinCategoryService, IESECWinComponentService, IESECWinLynxCardService, IESECWinTabService, IESECWinFeedService;

@interface IESECWinGoodsSectionController : IESECWinListKitCellController <IESECWinFlexGoodsCellProtocol>

@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedService> *feedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinGoodsService> *goodsService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveServiceProxy;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinPageCardService> *pageCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabLayoutService> *tabLayoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinComponentService> *componentService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (nonatomic) BOOL tapOnceLock;
@property (retain, nonatomic) IESECWinGoodsObject *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (BOOL)isSingleCard;
- (void)tagListShow:(id)a0 goodsModel:(id)a1;
- (void)clickTagList:(id)a0 goodsModel:(id)a1;
- (void)tapOnSourceView:(id)a0 jump:(BOOL)a1;
- (void)updatePlayableDurationAndCurrentTimeWithDuration:(double)a0 currentTime:(double)a1;
- (void)trackWithEventName:(id)a0 trackParams:(id)a1 once:(id)a2 btmID:(id)a3;
- (void)tapOnFanCouponView:(id)a0;
- (void)tapOnRecommendView:(id)a0 ritTag:(id)a1;
- (void)tapOnCoverTagViewWithModel:(id)a0;
- (id)getDLModelWithCellType:(unsigned long long)a0;
- (void)trackShowProductWithCell:(id)a0 index:(long long)a1;
- (void)tapOnSelfBuyingView:(id)a0;
- (void)trackShowProductWithCell:(id)a0;
- (id)paramsForEventTracking;
- (id)btmInfoForCardContentWithIndex:(long long)a0 widget:(id)a1;
- (double)p_titleLabelHeightForObject:(id)a0 width:(double)a1;
- (void)trackClickProductCardWithIndex:(long long)a0 elementParams:(id)a1 widget:(id)a2;
- (void)didClickProductWithIndex:(long long)a0;
- (void)jumpToWindowFeed;
- (void)jumpToGoodsDetailWithIndex:(long long)a0;
- (BOOL)usePageCardDynamicInsertCard;
- (void)jumpToGoodsDetailBySchemaWithGoodsModel:(id)a0 index:(long long)a1;
- (void)jumpToGoodsDetailWithGoodsModel:(id)a0;
- (id)getUnderTagTemp;
- (id)generateSouceBtmToken;
- (id)generateSouceBtmTokenWithBtmInfo:(id)a0;
- (id)btmInfo:(id)a0 index:(long long)a1 widget:(id)a2;
- (id)getDiscountInfoWithObject:(id)a0;
- (struct CGSize { double x0; double x1; })getSizeOfCellWithObject:(id)a0;
- (id)commonTrackParamsForBST;
- (id)getCardContentBtmIDWithHost:(id)a0 index:(long long)a1;
- (id)getBTMTrackDictWithJump:(BOOL)a0 host:(id)a1 index:(long long)a2 widget:(id)a3;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
