@class UIButton, NSString, UIImageView, UILabel, UIView, IESECVideoMarketingRedPacketBannerModel, IESECGCDTimer;
@protocol IESECGoodsDetailContainerProtocol;

@interface IESECGoodsFeedRedPacketPromptView : UIView

@property (copy, nonatomic) NSString *awemeId;
@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) IESECVideoMarketingRedPacketBannerModel *redPacketBanner;
@property (retain, nonatomic) IESECGCDTimer *countdownTimer;
@property (retain, nonatomic) UIView *redpacketContainer;
@property (retain, nonatomic) UIImageView *topContainer;
@property (retain, nonatomic) UIImageView *bottomContainer;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *countdownLabel;
@property (retain, nonatomic) UIView *countdownBanner;
@property (retain, nonatomic) UIView *sideRemindView;
@property (retain, nonatomic) UILabel *toUseLabel;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;

+ (void)onClickWithRawSchemaUrl:(id)a0 enterFrom:(id)a1 btmId:(id)a2 responder:(id)a3;

- (void)didClickClose:(id)a0;
- (void)didClickRedPacket:(id)a0;
- (void)setCountDownTimer;
- (void)animateCountDownBannerWithCompletionBlock:(id /* block */)a0;
- (id)currentCountdownText;
- (void)updateCountDownTimer;
- (void)removeRedPacketPrompt;
- (id)initWithAwemeId:(id)a0 redpacketBanner:(id)a1 container:(id)a2;
- (void)triggerScrolling;
- (void)triggerScrollEnd;
- (id)jumpSchemaWithFullModeState:(BOOL)a0;
- (void).cxx_destruct;
- (void)trackEvent:(id)a0;
- (void)setupViews;

@end
