@class UIView, IESECLivePromotionCardBusinessParams, IESECLiveGoodsViewModel, IESECLivePromotionCardConfigModel, NSString, NSAttributedString, IESECLigoManager, LOTAnimationView, IESECLiveAtmosphereLinearGradientBackgroundView, UILabel, IESECLiveContext;
@protocol IESECLivePromotionCardViewActionDelegate, IESECLivePromotionCardBusinessDelegate;

@interface IESECLivePromotionCardViewV2 : UIView <IESECLivePromotionCardCommonModuleContainer, IESECLivePromotionCardViewProtocol>

@property (retain, nonatomic) IESECLivePromotionCardConfigModel *configModel;
@property (retain, nonatomic) IESECLigoManager *ligoManager;
@property (retain, nonatomic) IESECLiveAtmosphereLinearGradientBackgroundView *baseColorView;
@property (retain, nonatomic) LOTAnimationView *bgEnhanceView;
@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UIView *infoContainer;
@property (retain, nonatomic) UIView *priceContainer;
@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) UIView *bottomBannerContainer;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLivePromotionCardBusinessParams *bizParams;
@property (retain, nonatomic) IESECLiveGoodsViewModel *goodsViewModel;
@property (weak, nonatomic) id<IESECLivePromotionCardBusinessDelegate> businessDelegate;
@property (retain, nonatomic) UIView *goodsContainerView;
@property (readonly, nonatomic) UIView *coverContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long viewStyle;
@property (weak, nonatomic) id<IESECLivePromotionCardViewActionDelegate> delegate;
@property (nonatomic) long long cardScene;
@property (readonly, copy, nonatomic) NSAttributedString *priceAttributedText;
@property (readonly, nonatomic) UILabel *indexLabel;

+ (double)calculateHeightWithGoodsModel:(id)a0;

- (void)trackShowEvent;
- (void)setupUIByUIConfig;
- (void)getTagTrackModelsWithBlock:(id /* block */)a0;
- (id)pathToComponentClass;
- (void)setBgEnhanceViewIfNeeded:(id)a0;
- (struct CGPoint { double x0; double x1; })addToCartButtonCenterToView:(id)a0;
- (struct CGPoint { double x0; double x1; })addToCoverContainerCenterToView:(id)a0;
- (void)promotionCardDidUsedECLiveParams:(id)a0;
- (void)updateCountDownModule:(id)a0;
- (void)setupGoodsViewModel:(id)a0;
- (void)appendGroupBuyAvatarWithURLString:(id)a0;
- (void)updatePriceModuleWithBargainModel:(id)a0 endBlock:(id /* block */)a1;
- (void)setGoodsInfoSoldOutState;
- (void)showFavoriteFlagIfNeeded;
- (BOOL)isShowingReplayButton;
- (BOOL)isShowingIntroducingView;
- (BOOL)isShowingComboBuyView;
- (id)getReplayButtonStatus;
- (void)updateCloseViewType:(long long)a0;
- (void)resizeIndexLabelInPlayback;
- (void)setPlayBackCardStyle;
- (void)setLiveReplayCardStyle;
- (void)updatePlayBackRights:(BOOL)a0;
- (void)setLiveSearchListCardStyle;
- (id)initWithLiveContext:(id)a0 config:(id)a1 bizParams:(id)a2;
- (void)setupLigoManager;
- (void)loadNativeComponents;
- (id)regionAndViews;
- (void)loadComponentForRegionName:(id)a0 forPath:(id)a1;
- (void)promotionCardCommonModule:(id)a0 didClickWithArea:(long long)a1 extraInfo:(id)a2 completion:(id /* block */)a3;
- (id)addCartAnimationParams;
- (id)p_actRecordManager;
- (void)setIntroducingInfo;
- (id)moduleAccessibilityElements:(id)a0;
- (void)setupAccessibilityLabelTextConfiguration;
- (id)moduleAccessibilityText:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;
- (void)setupAccessibility;

@end
