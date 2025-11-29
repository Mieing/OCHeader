@class UIView, UIImageView, CADisplayLink;

@interface IESLiveVSGiftComboCircleView : UIView

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) unsigned long long originCountdown;
@property (nonatomic) double currentCountdownRotate;
@property (retain, nonatomic) UIView *comboAnimationContentView;
@property (retain, nonatomic) UIImageView *comboBcakgroundImageView;
@property (retain, nonatomic) UIImageView *comboTextImageView;
@property (nonatomic) BOOL isScaling;
@property (copy, nonatomic) id /* block */ onSend;
@property (copy, nonatomic) id /* block */ onEnd;

- (void)destroyTimer;
- (void)startComboAnimation;
- (void)stopComboAnimation;
- (void)didComboButtonClicked:(id)a0;
- (id)initWithOriginCount:(unsigned long long)a0;
- (void)resetComboAnimation;
- (void)updateComboTextImage:(id)a0;
- (void)startCountdownTimer;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupViews;

@end
