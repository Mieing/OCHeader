@class IESLivePSComponentConfigModel, HTSEventContext, HTSLiveBusinessConfigure, IESLiveImageView, UILabel, UIView, IESLiveGCDTimer;

@interface IESLiveMessageTrayBusnissView : UIView <IESLivePSComponentViewProtocol>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) IESLiveImageView *logoImageView;
@property (retain, nonatomic) IESLiveImageView *jumpImageView;
@property (retain, nonatomic) IESLiveImageView *tailImageView;
@property (nonatomic) double trayHeight;
@property (retain, nonatomic) IESLiveGCDTimer *countDownTimer;
@property (retain, nonatomic) HTSLiveBusinessConfigure *configure;
@property (retain, nonatomic) UILabel *carouselLabel;
@property (nonatomic) BOOL didCarousel;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)tapView:(id)a0;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)publicScreenComponentProduced;
- (BOOL)enableJump;
- (id)schemeForJump:(id)a0;
- (void)trackDanmaWithEventName:(id)a0;
- (void)stopTitleCarousel;
- (void)carouselAnimation;
- (void)setupSubviewsWithConfigure:(id)a0;
- (void)trackTrayShow;
- (void)startTitleCarousel;
- (void)executeDisAppear:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
