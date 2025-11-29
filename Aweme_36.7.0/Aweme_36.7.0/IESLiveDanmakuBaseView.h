@class NSString, IESLiveDanmakuNode;

@interface IESLiveDanmakuBaseView : UIView <IESLiveDanmakuViewProtocol> {
    long long _pinType;
}

@property (nonatomic) BOOL startPinnedTimerAfterShow;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) IESLiveDanmakuNode *node;
@property (nonatomic) double trailingMinPadding;
@property (nonatomic) double moveDistance;
@property (nonatomic) double animationSpeed;
@property (nonatomic) double startTimestamp;
@property (nonatomic) double pauseTimestamp;
@property (nonatomic) BOOL removeAfterAnimation;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long pinType;
@property (copy, nonatomic) id /* block */ leaveChannelCompletion;
@property (copy, nonatomic) id /* block */ endAnimationCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_cleanForAnimationCompletion;
- (void)updateWithNode:(id)a0;
- (void)p_startPinnedTimer;
- (BOOL)pinModeRequired;
- (void)p_startAnimationForPin;
- (void)p_resumeAnimationForPin;
- (void)p_animateWithDuration:(double)a0 moveDistance:(double)a1 completion:(id /* block */)a2;
- (struct CGPoint { double x0; double x1; })pinningPosition;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)prepareForReuse;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (void)pauseAnimation;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
