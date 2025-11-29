@class IESECLiveAuctionAnimationView, IESECButton, IESECLiveAuctionUserInfoView, IESECLiveCardDataModel, IESECLiveImageLabel, IESECLiveHotSaleView, UIImageView, UIButton, IESECLiveTracker, IESECGCDTimer, IESECLiveGoodsJumpHandler;

@interface IESECLiveAuctionCardView : IESECLiveBaseCardView

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) IESECLiveImageLabel *statusImageView;
@property (retain, nonatomic) UIImageView *gradientView;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) IESECLiveHotSaleView *hotsaleView;
@property (retain, nonatomic) IESECLiveAuctionAnimationView *priceAnimationView;
@property (retain, nonatomic) IESECLiveAuctionAnimationView *messageAnimationView;
@property (retain, nonatomic) IESECButton *actionButton;
@property (retain, nonatomic) IESECLiveAuctionUserInfoView *actionUserInfoView;
@property (retain, nonatomic) IESECLiveCardDataModel *cardViewModel;
@property (retain, nonatomic) IESECLiveGoodsJumpHandler *jumpHandler;
@property (retain, nonatomic) IESECLiveTracker *tracker;
@property (retain, nonatomic) IESECGCDTimer *hotsaleTimer;
@property (retain, nonatomic) IESECGCDTimer *countdownTimer;

+ (id)cardViewWithModel:(id)a0 liveContext:(id)a1;

- (void)handleClose:(id)a0;
- (id)cardModel;
- (id)ecomEntranceForm;
- (id)goodsModel;
- (void)invalidateCountdownTimer;
- (void)setAnimationStatus:(long long)a0;
- (id)skinConfig;
- (void)trackClickWithArea:(id)a0;
- (id)coreParams;
- (id)curBtmModel;
- (void)updateGoodsWithoutState:(id)a0;
- (void)showHotsaleIfNeeded:(id)a0;
- (void)showCountdownIfNeeded:(id)a0;
- (void)updateActionButton:(id)a0;
- (void)p_showCountdown;
- (void)p_updateHotsaleInfo:(id)a0;
- (void)hideHotsaleView;
- (BOOL)shouldShowHotsaleWithSaleNum:(id)a0;
- (void)handleTapButton:(id)a0;
- (BOOL)p_isCurrentClearState;
- (void)handleTapWithClickStyle:(long long)a0;
- (void)updateUIWithGoodsModel:(id)a0;
- (void)showOnEnter:(BOOL)a0 followUp:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)enableUpdate;
- (void)updateWithCardModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)handleTap:(id)a0;
- (struct CGSize { double x0; double x1; })cardSize;
- (id)cardID;

@end
