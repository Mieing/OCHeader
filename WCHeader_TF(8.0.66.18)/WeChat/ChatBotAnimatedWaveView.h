@class UIColor, NSString, CAShapeLayer, CAAnimationGroup, UIView, ChatBotAnimatedWaveDelegateObj;

@interface ChatBotAnimatedWaveView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CAShapeLayer *firstWave;
@property (retain, nonatomic) CAShapeLayer *secondWave;
@property (retain, nonatomic) CAAnimationGroup *firstWaveAnimation;
@property (retain, nonatomic) CAAnimationGroup *secondWaveAnimation;
@property (retain, nonatomic) ChatBotAnimatedWaveDelegateObj *firstWaveAnimationDelegateObj;
@property (retain, nonatomic) ChatBotAnimatedWaveDelegateObj *secondWaveAnimationDelegateObj;
@property (nonatomic) BOOL canShowAnimation;
@property (nonatomic) BOOL isInAnimation;
@property (nonatomic) double waveScale;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentView:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeWaveAnimationForWave:(id)a0;
- (void)startFirstWaveAnimation;
- (void)stopAnimationWave:(BOOL)a0;
- (void)removeWaveAnimationWithResetFlag:(BOOL)a0;
- (void)startSecondWaveAnimation;
- (void)startWaveAnimation;
- (void)realStartWaveAnimation;
- (void)handleAnimationDidStopWithDelegateObj:(id)a0 finishedFlag:(BOOL)a1;
- (void).cxx_destruct;

@end
