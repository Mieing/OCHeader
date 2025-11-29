@class UIColor, CAShapeLayer, UIImage, UIView, UIButton;
@protocol StreamVoiceInputControlViewDelegate;

@interface StreamVoiceInputControlView : MMUIView

@property (retain, nonatomic) UIView *buttonShadowView;
@property (retain, nonatomic) UIButton *buttonView;
@property (retain, nonatomic) CAShapeLayer *indicator;
@property (retain, nonatomic) UIView *buttonCoverView;
@property (weak, nonatomic) id<StreamVoiceInputControlViewDelegate> delegate;
@property (nonatomic) double buttonLen;
@property (retain, nonatomic) UIImage *normalButtonImage;
@property (retain, nonatomic) UIColor *coverViewColor;
@property (retain, nonatomic) UIImage *highlightButtonImage;
@property (nonatomic) double baseButtonShadowRadius;
@property (nonatomic) double minButtonShadowRadius;
@property (nonatomic) double maxButtonShadowRadius;
@property (nonatomic) double touchUpOutsideDelay;

- (id)init;
- (void)initUI;
- (void)layoutSubviews;
- (void)buttonTouchDown;
- (void)checkHoldEvent;
- (void)buttonTouchUpInside;
- (void)buttonTouchUpOutside;
- (void)buttonTouchUp:(BOOL)a0;
- (void)startTapRecordingAnimation;
- (void)startHoldRecordingAnimation;
- (void)startHoldInitAnimation;
- (void)startWaitingForResultAnimation;
- (void)stopAnimation;
- (void)resetAnimation;
- (void)startBreatheAnimation;
- (void)addBreatheAnimation;
- (BOOL)isBreatheAnimationActive;
- (void)stopBreatheAnimation;
- (void)displayRecordingStatusForHold:(float)a0;
- (void)displayPeakPower:(float)a0 MaxRadius:(double)a1 MinRadius:(double)a2 BaseRadius:(double)a3 UIView:(id)a4 ShapeLayer:(id)a5;
- (void)initDefaultConfig;
- (void).cxx_destruct;

@end
