@class UIStackView, IESECButton, UIView, IESECLiveGoodsStatusMaskView, IESECLiveStateBannerView, UIImageView, NSString, IESECGCDTimer, IESECLiveListHotSaleView, UILabel;
@protocol IESECLiveItemTimerProtocol;

@interface IESECLivePromotionCardCoverModule : IESECLivePromotionCardCommonModule <IESECLiveListHotSaleViewDelegate>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *mainContentView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *coverVibeImageView;
@property (retain, nonatomic) IESECLiveGoodsStatusMaskView *statusMaskView;
@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) IESECLiveListHotSaleView *hotsaleView;
@property (retain, nonatomic) UIStackView *containerOnTopOfCover;
@property (retain, nonatomic) IESECButton *bottomButton;
@property (retain, nonatomic) IESECLiveStateBannerView *introducingView;
@property (nonatomic) long long goodsIndex;
@property (retain, nonatomic) id<IESECLiveItemTimerProtocol> timer;
@property (retain, nonatomic) id<IESECLiveItemTimerProtocol> auctionTimer;
@property (retain, nonatomic) IESECGCDTimer *auctionDigitalTimer;
@property (nonatomic) BOOL disableCountDownAtmos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShowEvent;
- (id)skinConfig;
- (void)setupCoverWithModel:(id)a0;
- (void)showCountDownAtmosphereIfNeed:(id)a0;
- (void)p_updateAuctionAtmosphere:(id)a0 tryShowCountDown:(BOOL)a1 countDown:(long long)a2;
- (id)handleAuctionAtmosFrequencyControl:(id)a0;
- (void)invalidateAllTimer;
- (void)updateWithGoodsViewModel:(id)a0;
- (void)hotsaleView:(id)a0 changeToState:(long long)a1 hotsaleInfo:(id)a2;
- (void)showFavoriteFlagIfNeeded;
- (void)setupMaskViewWithModel:(id)a0;
- (void)setupTopIconWithModel:(id)a0;
- (void)setupBottomBannerWithModel:(id)a0;
- (void)setupHotSaleAtmosphereWithGoodsViewModel:(id)a0 shouldShow:(BOOL)a1;
- (id)totalTrackParamsForBottomBanner;
- (id)btmModelForBottomBanner;
- (void)setIntroducingBannerSkin;
- (BOOL)enableEnhanceBottomButton;
- (void)invalidateAuctionTimer;
- (void)invalidateDigitalTimer;
- (id)createContainerByUIConfigWithOuterContainer:(id)a0;
- (id)createContainerWithOuterContainer:(id)a0;
- (void)bottomClick;
- (id)createIndexLabelByUIConfig;
- (id)createIndexLabel;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (id)view;
- (void)dealloc;
- (void)setupAccessibility;

@end
