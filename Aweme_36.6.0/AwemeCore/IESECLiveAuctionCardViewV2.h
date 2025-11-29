@class IESECLiveAuctionAnimationView, IESECButton, IESECLiveAuctionUserInfoView, IESECLiveCardDataModel, IESECLiveImageLabel, IESECLiveHotSaleView, UIImageView, UIButton, IESECLiveTracker, IESECGCDTimer, IESECLiveGoodsJumpHandler;

@interface IESECLiveAuctionCardViewV2 : IESECLiveBaseCardView

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) IESECLiveImageLabel *statusImageView;
@property (retain, nonatomic) UIImageView *gradientView;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) IESECLiveHotSaleView *hotsaleView;
@property (retain, nonatomic) IESECLiveAuctionAnimationView *priceAnimationView;
@property (retain, nonatomic) IESECLiveAuctionAnimationView *messageAnimationView;
@property (retain, nonatomic) IESECButton *actionButton;
@property (retain, nonatomic) IESECLiveAuctionUserInfoView *actionUserInfoView;
@property (retain, nonatomic) IESECLiveCardDataModel *auctionCardModel;
@property (retain, nonatomic) IESECLiveGoodsJumpHandler *jumpHandler;
@property (retain, nonatomic) IESECLiveTracker *tracker;
@property (retain, nonatomic) IESECGCDTimer *hotsaleTimer;
@property (retain, nonatomic) IESECGCDTimer *countdownTimer;
@property (nonatomic) BOOL disableCountDownAtmos;

+ (id)cardViewWithModel:(id)a0 liveContext:(id)a1;

- (void)handleClose:(id)a0;
- (id)cardModel;
- (id)ecomEntranceForm;
- (id)goodsModel;
- (void)invalidateCountdownTimer;
- (void)trackClickWithArea:(id)a0;
- (id)coreParams;
- (void)updateGoodsWithoutState:(id)a0;
- (void)showHotsaleIfNeeded:(id)a0;
- (void)showCountdownIfNeeded:(id)a0;
- (void)updateActionButton:(id)a0;
- (void)hideHotsaleView;
- (void)handleTapButton:(id)a0;
- (BOOL)p_isCurrentClearState;
- (void)handleTapWithClickStyle:(long long)a0;
- (void)updateUIWithGoodsModel:(id)a0;
- (void)showOnEnter:(BOOL)a0 followUp:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)enableUpdate;
- (id)curBtmModelWithArea:(id)a0;
- (void)p_showCountdown:(id)a0;
- (void)showCountDownAtmosphereIfNeed:(id)a0;
- (void)p_updateAuctionAtmosphere:(id)a0 tryShowCountDown:(BOOL)a1 countDown:(long long)a2;
- (id)handleAuctionAtmosFrequencyControl:(id)a0;
- (void)invalidateHotSaleTimer;
- (void)p_reportAuctionClick;
- (void)invalidateAllTimer;
- (void)updateWithCardModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)handleTap:(id)a0;
- (struct CGSize { double x0; double x1; })cardSize;
- (id)cardID;

@end
