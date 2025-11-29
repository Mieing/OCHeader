@class NSString, DDanmakuItemDescriptor;
@protocol DDanmakuItemViewDelegate;

@interface DDanmakuItemBaseView : UIView <CAAnimationDelegate, DDanmakuItemViewProtocol>

@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) NSString *itemViewType;
@property (weak, nonatomic) id<DDanmakuItemViewDelegate> itemViewDelegate;
@property (nonatomic) BOOL hasStartAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ animationFinishBlock;
@property (weak, nonatomic) DDanmakuItemDescriptor *descriptor;

- (void)didDisplay;
- (void)updateWithDescriptor:(id)a0;
- (void)pauseAnimationWithCompletionBlock:(id /* block */)a0;
- (id)initWithItemViewType:(id)a0;
- (double)totalLifeTime;
- (void)p_cleanForAnimationCompletion;
- (void)animationDidStart:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)prepareForReuse;
- (double)animationSpeed;

@end
