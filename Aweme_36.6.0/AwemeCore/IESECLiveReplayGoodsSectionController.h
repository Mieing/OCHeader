@class IESECLiveReplayGoodsListContext, NSString, IESECLivePromotionCardBusinessParams, IESECLivePromotionCardJumpHandler, IESECLiveReplayGoodsSectionViewModel;

@interface IESECLiveReplayGoodsSectionController : IGListBindingSectionController <IGListBindingSectionControllerDataSource, IESECLiveListSectionProtocol, IESECLiveReplayGoodsCellDelegate, IESECLivePromotionCardBusinessParamsDelegate, IESECLivePromotionCardBusinessDelegate>

@property (weak, nonatomic) IESECLiveReplayGoodsListContext *context;
@property (retain, nonatomic) IESECLiveReplayGoodsSectionViewModel *viewModel;
@property (retain, nonatomic) IESECLivePromotionCardJumpHandler *jumpHandler;
@property (retain, nonatomic) IESECLivePromotionCardBusinessParams *businessParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ecomEntranceForm;
- (void)didUpdateToObject:(id)a0;
- (id)getBasicTrackParams;
- (id)promotionCardEcomEntranceForm;
- (id)promotionCardPanelSize;
- (id)getGoodsListOpenParams;
- (id)getHourBuyShopID;
- (id)getGoodsListLogID;
- (id)getPassthroughTrackDic;
- (BOOL)currentLandscape;
- (id)skuMaskBgColor;
- (id)getSkuFrom;
- (id)promotionCardLiveListChannel;
- (id)getStoreTrack;
- (void)didClickPromotionCardView:(id)a0 areaType:(long long)a1 extraInfo:(id)a2 completion:(id /* block */)a3;
- (void)reportEventWithName:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (BOOL)useBizCardAction;
- (id)skuCreateInfoWithGoodsModel:(id)a0 sourceBTMToken:(id)a1;
- (id)btmModelWithHost:(id)a0 btm:(id)a1;
- (void)routeToGoodsDetailWithBtmModel:(id)a0;
- (void)updateCurrentSection;
- (void)didClickBuyButtonWithBtmModel:(id)a0;
- (void)jumpWithClickStyle:(long long)a0 btmModel:(id)a1;
- (void)didClickBlankWithExtraInfo:(id)a0;
- (void)didClickBuyButtonWithExtraInfo:(id)a0;
- (void)didClickAddCartButtonWithCartView:(id)a0 extraInfo:(id)a1;
- (id)sectionController:(id)a0 viewModelsForObject:(id)a1;
- (id)sectionController:(id)a0 cellForViewModel:(id)a1 atIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })sectionController:(id)a0 sizeForViewModel:(id)a1 atIndex:(long long)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
