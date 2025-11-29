@class UIColor, NSString, UILabel, UIView, NSMutableAttributedString;

@interface WCFlowLyricsView : MMUIView <CAAnimationDelegate>

@property (retain, nonatomic) UILabel *flowLabel;
@property (retain, nonatomic) UIView *gradientMaskView;
@property (nonatomic) double lastLyricsStartTime;
@property (nonatomic) BOOL isRepeatByReplay;
@property (nonatomic) BOOL hasStart;
@property (retain, nonatomic) NSString *originString;
@property (retain, nonatomic) NSMutableAttributedString *attributedString;
@property (retain, nonatomic) UIColor *unSelectedColor;
@property (retain, nonatomic) UIColor *defaultLabelTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)addGradientMaskView;
- (void)addLyricsLabel;
- (void)setContentViewData:(id)a0 withFromeBgmSearch:(BOOL)a1;
- (id)getHitKeysFor:(id)a0;
- (void)waitingFlow;
- (void)startFlow;
- (void)startFlowInMs:(unsigned long long)a0;
- (void)stopFlow;
- (void)resetToStopState;
- (void)replay;
- (BOOL)isAnimating;
- (void)animateFromRightToLeftDuration:(double)a0 offset:(float)a1;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)getAimLabelTextColor:(id)a0;
- (void).cxx_destruct;

@end
