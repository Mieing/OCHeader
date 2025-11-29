@class UIView, NSString, NSArray, IESLiveUnifiedGiftComboArrow, CALayer, UIImageView, IESLiveCountTimer, UIButton, NSMutableArray, IESLiveUnifiedGiftComboHintView, IESLiveAnimatedImageView;
@protocol IESLiveUnifiedGiftComboViewDelegate;

@interface IESLiveUnifiedRareShopGiftComboView : UIView <UIGestureRecognizerDelegate, IESLiveUnifiedGiftComboSubviewDelegate, IESLiveUnifiedGiftComboHintDelegate, IESLiveUnifiedGiftComboViewProtocol>

@property (retain, nonatomic) UIImageView *iconTextView;
@property (retain, nonatomic) UIView *backGroundView;
@property (retain, nonatomic) CALayer *backGroundProLayer;
@property (retain, nonatomic) UIView *backGroundViewContainer;
@property (retain, nonatomic) UIView *rippleContainer;
@property (retain, nonatomic) UIImageView *countDownNumber;
@property (retain, nonatomic) NSArray *countDownNumberImages;
@property (retain, nonatomic) IESLiveUnifiedGiftComboArrow *arrowContainer;
@property (retain, nonatomic) IESLiveUnifiedGiftComboHintView *hintContainer;
@property (retain, nonatomic) IESLiveCountTimer *countDownNumberTimer;
@property (retain, nonatomic) IESLiveCountTimer *iconTextCountDownTimer;
@property (retain, nonatomic) IESLiveCountTimer *disappearTimer;
@property (retain, nonatomic) NSMutableArray *clickTime;
@property (nonatomic) int startReadSecond;
@property (nonatomic) int curReadSecond;
@property (nonatomic) double displayDuration;
@property (nonatomic) BOOL newPressCome;
@property (nonatomic) double lastClickTime;
@property (weak, nonatomic) id<IESLiveUnifiedGiftComboViewDelegate> delegate;
@property (retain, nonatomic) IESLiveAnimatedImageView *downBackgroundRipplePlayer;
@property (retain, nonatomic) IESLiveAnimatedImageView *backgroundRipplePlayer;
@property (retain, nonatomic) IESLiveAnimatedImageView *buttonRipplePlayer;
@property (retain, nonatomic) IESLiveAnimatedImageView *buttonDownRipplePlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) BOOL extraHintAnimating;

- (void)impact;
- (void)showSendTogetherHintTextWithURL:(id)a0 isNormalHint:(BOOL)a1;
- (void)showHintHugeTextWithURL:(id)a0;
- (void)showHugeTextWithURL:(id)a0;
- (void)hideFlyAnimation;
- (double)getAlpha;
- (double)comboSubviewGetAlpha:(id)a0;
- (BOOL)comboSubviewIsBigGift:(id)a0;
- (id)comboSubviewGetButtonView:(id)a0;
- (long long)comboHintViewGetComboCount:(id)a0;
- (void)removeOtherText;
- (void)comboHintView:(id)a0 isExtraHintAnimating:(BOOL)a1;
- (void)startComboNumberAnimation;
- (void)cancelAllAnimation;
- (void)startNormalDisappearTimer;
- (void)startIconTextCountDownTimer;
- (void)startCountDownNumberTimer;
- (void)startPressAnimation;
- (void)startRippleAnimation;
- (void)startFlyArrowAnimation;
- (void)p_doIconTextCountDownAnimation;
- (void)p_doCountDownNumberAnimation;
- (void)stopRippleWebpAnimation;
- (void)startDownRippleWebpAnimation;
- (void)stopDownRippleWebpAnimation;
- (void)startRippleWebpAnimation;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)setUpUI;

@end
