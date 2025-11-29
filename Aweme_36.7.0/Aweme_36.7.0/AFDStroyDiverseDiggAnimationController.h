@class NSString, AFDStoryDiverseDiggAnimator, AFDStoryDiverseDiggDoubleClickAnimator;

@interface AFDStroyDiverseDiggAnimationController : NSObject

@property (nonatomic) double lastTimestamp;
@property (copy, nonatomic) NSString *actionID;
@property (nonatomic) unsigned long long currentCount;
@property (retain, nonatomic) AFDStoryDiverseDiggAnimator *singleClickAnimator;
@property (retain, nonatomic) AFDStoryDiverseDiggDoubleClickAnimator *doubleClickAnimator;

+ (id)sharedInstance;

- (void)playAnimationWithContext:(id)a0;
- (BOOL)shouldPlayComboAnimationWithContext:(id)a0;
- (id)buildAnimatorContextWithContext:(id)a0;
- (double)comboInterval;
- (void).cxx_destruct;
- (id)init;
- (id)countText;

@end
