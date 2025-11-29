@class NSString, IESECLivePromotionCard, IESECLiveContext, IESECLiveGoodsViewModel;
@protocol IESECLivePromotionCardProviderBizDelegate, IESECLivePromotionCardListBizService;

@interface IESECLivePromotionCardProvider : NSObject <IESECLivePromotionCardBusinessDelegate, IESECLivePromotionCardBusinessParamsDelegate, IESECLivePromotionCardProviderService>

@property (weak, nonatomic) id<IESECLivePromotionCardProviderBizDelegate> delegate;
@property (weak, nonatomic) id<IESECLivePromotionCardListBizService> listService;
@property (retain, nonatomic) IESECLiveGoodsViewModel *goodsViewModel;
@property (retain, nonatomic) NSString *cardData;
@property (retain, nonatomic) IESECLivePromotionCard *promotionCard;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardData:(id)a0 delegate:(id)a1;

- (id)searchParams;
- (id)updateSearchParams:(id)a0;
- (id)localPage;
- (id)localView;
- (long long)checkSourcePage;
- (void)updateCardData:(id)a0;
- (id)getPromotionCardView;
- (id)getBasicTrackParams;
- (id)promotionCardEcomEntranceForm;
- (id)promotionCardPanelSize;
- (id)getGoodsListOpenParams;
- (id)getPassthroughTrackDic;
- (id)getSkuFrom;
- (void)didClickPromotionCardView:(id)a0 areaType:(long long)a1 extraInfo:(id)a2 completion:(id /* block */)a3;
- (id /* block */)addCartAnimBlockWithPromotionCardView:(id)a0;
- (id)listABConfigModel;
- (id)currentActionTrackModuleInfo;
- (id)createGoodsViewModelWithData:(id)a0;
- (id)createPromotionCard;
- (id)initWithLiveContext:(id)a0 cardViewData:(id)a1 delegate:(id)a2;
- (id)p_getCardConfigModel;
- (id)replaceSearchParams:(id)a0;
- (id)updatePassThroughLogData:(id)a0;
- (id)p_dealSearchParams:(id)a0 withJson:(id)a1;
- (long long)promotionCardScene;
- (BOOL)p_isSimilarState:(id)a0;
- (void).cxx_destruct;

@end
