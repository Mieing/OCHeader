@class NSString, LOTAnimationView, NSMutableDictionary, NSDate, NSNumber;
@protocol BDNativeLottieViewDelegate;

@interface BDNativeLottieView : UIView <LOTAnimationDelegate>

@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (copy, nonatomic) NSString *currentAnimationURL;
@property (nonatomic) unsigned long long loopIndex;
@property (retain, nonatomic) NSNumber *lastFrame;
@property (nonatomic) BOOL resourceHasReady;
@property (nonatomic) BOOL playWhenAllReady;
@property (retain, nonatomic) NSMutableDictionary *subscribedFrames;
@property (retain, nonatomic) NSDate *lastDateOfSourceUpdate;
@property (weak, nonatomic) id<BDNativeLottieViewDelegate> delegate;
@property (nonatomic) BOOL loop;
@property (nonatomic) BOOL autoReverse;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL couldPlay;
@property (nonatomic) float speed;
@property (nonatomic) long long loopCount;
@property (retain, nonatomic) NSNumber *startFrame;
@property (retain, nonatomic) NSNumber *endFrame;
@property (copy, nonatomic) NSString *objectFitMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationView:(id)a0 isDisplayingFrame:(float)a1;
- (void)animationView:(id)a0 fetchResourceWithURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)animationView:(id)a0 didLoadResourcesWithError:(id)a1;
- (void)animationViewDidStart:(id)a0;
- (void)animationViewDidStop:(id)a0;
- (void)animationViewDidPause:(id)a0;
- (void)bdNativeSubscribeUpdateEvent:(id)a0;
- (void)bdNativeUnsubscribeUpdateEvent:(id)a0;
- (void)bdNativeUpdateAnimationProperties;
- (void)bdNativeAnimationWithURL:(id)a0;
- (void)bdNativeAnimationWithJSON:(id)a0;
- (void)bdNativeStopAnimation;
- (void)bdNativeUpdateAnimationPlayState;
- (void)bdNativeUpdateAnimationPosition:(id)a0 withFrame:(BOOL)a1;
- (id)bdNativeCurrentFrame;
- (double)bdNativeAnimationProgress;
- (id)bdNativeTotalFrameCount;
- (double)bdNativeAnimationDuration;
- (unsigned long long)bdNativeCurrentLoopIndex;
- (BOOL)bdNativeIsAnimationPlaying;
- (void)updateAnimation:(id)a0 withURL:(id)a1;
- (void)playIfReady;
- (void)__configFitMode;
- (void)reportErrorCode:(unsigned long long)a0 message:(id)a1 resourceURL:(id)a2;
- (void)sendErrorEventWithCode:(unsigned long long)a0 resourceURL:(id)a1 message:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didMoveToWindow;

@end
