@class UIView, MultiTalkHDHeadView, UIImageView, UIButton, MultitalkMinimizeView, CAGradientLayer, MultitalkMiniInAppTalkingInfo, VoipMinimizeView, UILabel;

@interface MultitalkMiniInAppView : UIView

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } preferredRenderViewSize;

@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) MultitalkMinimizeView *baseView;
@property (retain, nonatomic) UIView *extendView;
@property (retain, nonatomic) UIImageView *captureImageView;
@property (retain, nonatomic) UIImageView *microphoneImageView;
@property (retain, nonatomic) MultiTalkHDHeadView *talkingHeadView;
@property (retain, nonatomic) UIView *talkingRenderContainerView;
@property (retain, nonatomic) UIView *talkingRenderView;
@property (copy, nonatomic) id /* block */ autoResetTalkingInfoBlock;
@property (retain, nonatomic) UIView *talkingNameBackground;
@property (retain, nonatomic) CAGradientLayer *talkingNameBackgroundGradientLayer;
@property (retain, nonatomic) UILabel *talkingNameLabel;
@property (retain, nonatomic) MultitalkMiniInAppTalkingInfo *talkingInfo;
@property (retain, nonatomic) UIButton *mainButton;
@property (retain, nonatomic) UIView *subCallView;
@property (retain, nonatomic) VoipMinimizeView *subCallMinimizeView;
@property (retain, nonatomic) UIButton *subCallButton;
@property (nonatomic) BOOL isMyCameraOn;
@property (nonatomic) BOOL isMyMicrophoneOn;
@property (nonatomic) BOOL isInAudioInterruption;
@property (nonatomic) unsigned long long talkingStatus;
@property (nonatomic) unsigned long long subCallStatus;
@property (copy, nonatomic) id /* block */ onMainCallClickCallback;
@property (copy, nonatomic) id /* block */ onSubCallClickCallback;

+ (id)miniInAppView;

- (struct CGSize { double x0; double x1; })mainViewSize;
- (void)cancelAutoResetTalkingInfoBlock;
- (void)layoutMainButton;
- (void)onMainButtonClick:(id)a0;
- (void)layoutContentView;
- (void)layoutSubCallView;
- (void)layoutSubCallMinimizeView;
- (void)layoutSubCallButton;
- (void)onExtendButtonClick:(id)a0;
- (void)setupTalkingInfo:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
