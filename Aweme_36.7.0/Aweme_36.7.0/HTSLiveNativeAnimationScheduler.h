@class NSString, NSMutableArray, UIView;
@protocol HTSLiveAnimationView;

@interface HTSLiveNativeAnimationScheduler : NSObject <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIView *playground;
@property (retain, nonatomic) NSMutableArray *animations;
@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL invalid;
@property (weak, nonatomic) UIView<HTSLiveAnimationView> *currentAnimationView;
@property (nonatomic) BOOL disableQueueConsume;
@property (nonatomic) BOOL enableSwipeToDimiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)liveThermalStateSeriousNotification:(id)a0;
- (BOOL)shouldSetInitialDisableQueueForScene:(long long)a0;
- (void)pushAnimation:(id)a0 withCallback:(id /* block */)a1;
- (void)startNextAnimationIfNeeded;
- (void)shiftAnimation:(BOOL)a0;
- (void)excuteAnimation:(id)a0 finished:(id /* block */)a1;
- (id)impForAnimation:(id)a0;
- (void)makeImp:(id)a0 interactiveWithAnimation:(id)a1;
- (id)awardContent:(long long)a0;
- (id)tapGestureRecognizer:(id)a0;
- (void)addSwipeGestureRecognizer:(id)a0;
- (void)swipeGestureRecognizeAction:(id)a0;
- (id)initWithPlayground:(id)a0 diContext:(id)a1;
- (void)cancelCurrentAnimation;
- (void)dispatch:(id)a0 finished:(id /* block */)a1;
- (void)enableAnimationQueueConsume:(BOOL)a0;
- (void)purge;
- (void).cxx_destruct;
- (void)stopAnimations;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dispatch:(long long)a0;
- (void)dealloc;
- (void)p_addObservers;

@end
