@class UIControl, NSString, LOTAnimationView, UIImageView, UIButton;

@interface IESLiveMessageListVoiceCell : IESLiveMessageListBaseCell <CAAnimationDelegate, IESLiveAudioSendStatusChangeDelegate, IESLiveAudioPlayAnimDelegate>

@property (retain, nonatomic) LOTAnimationView *waveView;
@property (retain, nonatomic) UIImageView *sendingView;
@property (retain, nonatomic) UIButton *sendingFailView;
@property (retain, nonatomic) UIControl *resendPanel;
@property (retain, nonatomic) UIControl *landscapeResendPanel;
@property (nonatomic) BOOL enableAnimationOpt;
@property (nonatomic) BOOL enableFixLoopAnimationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshWith:(id)a0;
- (void)audioMessage:(id)a0 sendStatusChanged:(unsigned long long)a1;
- (void)playAudioAnimation:(BOOL)a0 withNode:(id)a1;
- (BOOL)needLoadMessageTextLabel;
- (void)showReSendPanel;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getWaveViewRangeWithAttributedString:(id)a0;
- (void)setDurationViewAlpha:(double)a0 WithNode:(id)a1;
- (void)hideSendingAnimation;
- (void)showSendingAnimation;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getDurationViewRangeWithAttributedString:(id)a0;
- (void)dismissLandscapeResendPanel;
- (void)reSendMessage;
- (void)showLandScapeResendPanel;
- (void)dismissReSendPanel;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)prepareForReuse;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupView;

@end
