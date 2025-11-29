@class NSString, NSArray, PAGView, NSOperationQueue, CADisplayLink, NSMutableArray, MMEasterEggTopAnimation;
@protocol MMEasterEggEffectDelegateImplicitAnimation;

@interface MMEasterEggEffectImplicitAnimation : MMEasterEggEffect <ImplicitViewDelegate, InteractiveImplicitViewDelegate, PAGViewListener>

@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) PAGView *pagView;
@property (nonatomic) long long animationType;
@property (copy, nonatomic) id /* block */ durationBlock;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSMutableArray *implicitViews;
@property (nonatomic) unsigned long long startAnimationViewCount;
@property (nonatomic) unsigned long long countOfViewFinished;
@property (nonatomic) double nextStartAnimationTime;
@property (weak, nonatomic) id<MMEasterEggEffectDelegateImplicitAnimation> delegate;
@property (retain, nonatomic) NSArray *animations;
@property (retain, nonatomic) MMEasterEggTopAnimation *topAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)isRunning;
- (BOOL)startEffectWithExtInfo:(id)a0;
- (void)continueEffectWithInteractiveUI:(id)a0;
- (void)endEffectWithReason:(unsigned int)a0;
- (void)setBackgroundView:(id)a0;
- (void)startTopAnimation;
- (void)startAnimationWithImplicitViews:(id)a0;
- (void)updateFrame;
- (void)updateCountOfViewStartAnimationWithCurTime:(double)a0;
- (BOOL)checkEnd;
- (void)setSessionId:(id)a0;
- (void)onAnimationEnd:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBoundsForAnimationType:(long long)a0;
- (void)didTapInteractiveImplicitView:(id)a0;
- (void).cxx_destruct;

@end
