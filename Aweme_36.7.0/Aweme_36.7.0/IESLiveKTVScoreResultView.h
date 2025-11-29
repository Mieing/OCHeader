@class UIView, NSArray, UIImageView, IESLiveGCDTimer, UIButton, CAGradientLayer, IESLiveKTVCommonStore, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLiveKTVScoreResultView : HTSEventForwardingView

@property (retain, nonatomic) IESLiveKTVCommonStore *store;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *imageView;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) long long countTime;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSArray *scoreSettingModels;
@property (nonatomic) double scorePercent;

- (void)p_setupUIs;
- (void)p_stopCountdown;
- (id)songLevelWithPrecent:(double)a0;
- (BOOL)isLastSong;
- (void)tr_showScoreResultEventWithLevel:(id)a0;
- (void)p_startCountdownOfDismiss;
- (void)p_clickedActionBtn;
- (void)dismiss;
- (void).cxx_destruct;
- (id)actionTitle;
- (BOOL)isAnchor;
- (id)initWithStore:(id)a0;
- (void)layoutSubviews;
- (void)showInView:(id)a0;

@end
