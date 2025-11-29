@class AFDStoryDiverseDiggGuideAnimator;

@interface AFDStroyDiverseDiggGuideAnimationController : NSObject

@property (retain, nonatomic) AFDStoryDiverseDiggGuideAnimator *animator;

+ (id)sharedInstance;

- (void)playAnimationWithContext:(id)a0 animationDelegate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)cancelAnimation;

@end
