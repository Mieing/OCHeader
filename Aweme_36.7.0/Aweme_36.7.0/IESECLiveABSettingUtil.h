@class NSArray, IESECLiveContext, NSDictionary, IESECLiveIntroducingCellABConfig, NSNumber;

@interface IESECLiveABSettingUtil : NSObject

@property (weak, nonatomic) IESECLiveContext *liveContext;
@property (nonatomic) BOOL enableEarlyCallRouterForAutoOpen;
@property (nonatomic) BOOL ecLivePanelSizeOpt;
@property (nonatomic) double listGoodsCellHeight;
@property (nonatomic) BOOL enableEnhancePromotionReplayButton;
@property (nonatomic) BOOL enableEnhancePromotionRelatedEffect;
@property (nonatomic) BOOL enableEnhancePromotionIntroduceEffect;
@property (nonatomic) BOOL enableSeckillProgressAnimation;
@property (nonatomic) BOOL enableCardStructureOpt;
@property (nonatomic) BOOL enableLigoUseAnnieCardNew;
@property (nonatomic) BOOL enableUseEcomRoomFlag;
@property (nonatomic) BOOL routerWidgetOpt;
@property (nonatomic) BOOL useNewPanelAnimationService;
@property (nonatomic) BOOL ecLiveAtmosphereSwitchOpt;
@property (nonatomic) BOOL ecLiveCancelLoginRestrictionList;
@property (nonatomic) BOOL ecLiveCancelLoginRestrictionCard;
@property (nonatomic) BOOL enableLivePopCardOpenList;
@property (retain, nonatomic) NSNumber *ecLivePopCardOpenListDelayTime;
@property (retain, nonatomic) NSNumber *ecLivePopCardOpenListFrequency;
@property (nonatomic) BOOL ecLiveGoodsListHeightOpt;
@property (nonatomic) BOOL goodsListUseDiff;
@property (nonatomic) BOOL goodsListUseDiffAndAnchor;
@property (nonatomic) BOOL ecLiveAddCartAnimationOpt;
@property (nonatomic) BOOL ecLiveInstantRoomAddCartAnimationOpt;
@property (retain, nonatomic) NSArray *ecomLivePopCardSliceTemplates;
@property (retain, nonatomic) NSDictionary *liveInstantRoomFuncMap;
@property (nonatomic) BOOL bizRequiresLogin;
@property (nonatomic) long long clearLivePendantType;
@property (nonatomic) BOOL detailShowHotAtmosphere;
@property (nonatomic) BOOL mediaContainerTranslatOpti;
@property (nonatomic) BOOL liveCardSkuBuyPrefetch;
@property (nonatomic) BOOL liveCardSkuBuyPrefetchWhenShow;
@property (nonatomic) BOOL goodslistListModelOpti;
@property (retain, nonatomic) IESECLiveIntroducingCellABConfig *introducingCellABConfig;

- (id)initWithLiveContext:(id)a0;
- (void)configABSetting;
- (void).cxx_destruct;

@end
